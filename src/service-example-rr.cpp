#include <iomanip>
#include <iostream>
#include <sstream>
#include <thread>

#include <vsomeip/vsomeip.hpp>
#include "sd_overall.pb.h"
#include "serialization/serialize_json.h"

using namespace xpilot::sr2_0::proto;
using namespace std;

#define SAMPLE_SERVICE_ID 0x1234
#define SAMPLE_INSTANCE_ID 0x5678
#define SAMPLE_METHOD_ID 0x0421
#define SAMPLE_EVENTGROUP_ID 0x4465
#define SAMPLE_EVENT_ID 0x8778

shared_ptr<vsomeip::application> app;
shared_ptr<vsomeip::payload> payload;

void run() {

    this_thread::sleep_for(chrono::milliseconds(50));
    cout << "--------------------------------------------------------------" << endl;
    app->notify(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_EVENT_ID, payload);
}

void on_message(const shared_ptr<vsomeip::message> &_request) {

    shared_ptr<vsomeip::payload> its_payload = _request->get_payload();
    vsomeip::length_t l = its_payload->get_length();

    // Get payload
    stringstream ss;
    for (vsomeip::length_t i=0; i<l; i++) {
       ss << setw(2) << setfill('0') << hex
          << (int)*(its_payload->get_data()+i) << " ";
    }

    cout << "SERVICE: Received message with Client/Session ["
        << setw(4) << setfill('0') << hex << _request->get_client() << "/"
        << setw(4) << setfill('0') << hex << _request->get_session() << "] "
        << ss.str() << endl;

    // Create response
    shared_ptr<vsomeip::message> its_response = vsomeip::runtime::get()->create_response(_request);
    its_payload = vsomeip::runtime::get()->create_payload();
    vector<vsomeip::byte_t> its_payload_data;
    for (int i=9; i>=0; i--) {
        its_payload_data.push_back(i % 256);
    }
    its_payload->set_data(its_payload_data);
    its_response->set_payload(its_payload);
    app->send(its_response);
}

int main() {

    GOOGLE_PROTOBUF_VERIFY_VERSION;

    // Construct Message
    // SDOverallMsg
    SDOverallMsg newSDOverallMsg;

    app = vsomeip::runtime::get()->create_application("World");
    app->init();
    app->register_message_handler(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_METHOD_ID, on_message);
    app->offer_service(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID);

    payload = vsomeip::runtime::get()->create_payload();
    
    string serialized_data;
    auto result = serialize_json("test.json", &newSDOverallMsg, &serialized_data);

    cout << "===============" << newSDOverallMsg.DebugString() << endl;
    payload->set_data(vector<vsomeip::byte_t>(serialized_data.begin(), serialized_data.end()));

    set<vsomeip::eventgroup_t> its_groups;
    its_groups.insert(SAMPLE_EVENTGROUP_ID);
    app->offer_event(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_EVENT_ID, its_groups);
    thread sender(run);
    app->start();

    return 0;
}
