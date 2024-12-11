#include <iomanip>
#include <iostream>
#include <sstream>
#include <thread>

#include <vsomeip/vsomeip.hpp>
#include <sd_overall.pb.h>

#define SAMPLE_SERVICE_ID 0x1234
#define SAMPLE_INSTANCE_ID 0x5678
#define SAMPLE_METHOD_ID 0x0421

std::shared_ptr<vsomeip::application> app;

#define SAMPLE_EVENTGROUP_ID 0x4465
#define SAMPLE_EVENT_ID 0x8778
std::shared_ptr<vsomeip::payload> payload;


using namespace xpilot::sr2_0::proto;

void run() {

    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    std::cout << "--------------------------------------------------------------" << std::endl;
    app->notify(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_EVENT_ID, payload);
}

void on_message(const std::shared_ptr<vsomeip::message> &_request) {

    std::shared_ptr<vsomeip::payload> its_payload = _request->get_payload();
    vsomeip::length_t l = its_payload->get_length();

    // Get payload
    std::stringstream ss;
    for (vsomeip::length_t i=0; i<l; i++) {
       ss << std::setw(2) << std::setfill('0') << std::hex
          << (int)*(its_payload->get_data()+i) << " ";
    }

    std::cout << "SERVICE: Received message with Client/Session ["
        << std::setw(4) << std::setfill('0') << std::hex << _request->get_client() << "/"
        << std::setw(4) << std::setfill('0') << std::hex << _request->get_session() << "] "
        << ss.str() << std::endl;

    // Create response
    std::shared_ptr<vsomeip::message> its_response = vsomeip::runtime::get()->create_response(_request);
    its_payload = vsomeip::runtime::get()->create_payload();
    std::vector<vsomeip::byte_t> its_payload_data;
    for (int i=9; i>=0; i--) {
        its_payload_data.push_back(i % 256);
    }
    its_payload->set_data(its_payload_data);
    its_response->set_payload(its_payload);
    app->send(its_response);
}

int main() {

    GOOGLE_PROTOBUF_VERIFY_VERSION;
    SDOverallMsg newSDOverallMsg;
    LocalPoseInfoMsg* newLocalPoseInfoMsg;

    newLocalPoseInfoMsg->set_timestamp(10000);
    newSDOverallMsg.set_allocated_localpose_msg(newLocalPoseInfoMsg);

    app = vsomeip::runtime::get()->create_application("World");
    app->init();
    app->register_message_handler(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_METHOD_ID, on_message);
    app->offer_service(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID);

    const vsomeip::byte_t its_data[] = { 0x10 };
    payload = vsomeip::runtime::get()->create_payload();

    std::string serialized_data;
    if (!newSDOverallMsg.SerializeToString(&serialized_data)) {
        std::cerr << "Failed to serialize Protobuf message." << std::endl;
        return 0;
    }
    payload->set_data(std::vector<vsomeip::byte_t>(serialized_data.begin(), serialized_data.end()));
    // payload->set_data(its_data, sizeof(its_data));

    std::set<vsomeip::eventgroup_t> its_groups;
    its_groups.insert(SAMPLE_EVENTGROUP_ID);
    app->offer_event(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_EVENT_ID, its_groups);
    std::thread sender(run);
    app->start();

    return 0;
}
