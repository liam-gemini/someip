#include <iomanip>
#include <iostream>
#include <sstream>
#include <thread>

#include <vsomeip/vsomeip.hpp>
#include "sd_overall.pb.h"
#include "proto_ap/WM_display_realtime.pb.h"
#include "serialization/serialize_json.h"

using namespace xpilot::sr2_0::proto;
using namespace SRprotobuf;
using namespace std;

#define SR_SERVICE_ID 0x4010
#define SR_INSTANCE_ID 0x0001
#define SR_EVENTGROUP_ID 0x0001
#define AP_SR_PERIOD_DATA_EVENT_ID 0x8002

shared_ptr<vsomeip::application> app;
shared_ptr<vsomeip::payload> ap_driving_data_payload;

void run(){
    while(true){
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << "Server: sending a notification..." << endl;
        app->notify(SR_SERVICE_ID, SR_INSTANCE_ID, AP_SR_PERIOD_DATA_EVENT_ID, ap_driving_data_payload);
    }
}

void on_message(const shared_ptr<vsomeip::message> &_request) {

}

int main(){

    GOOGLE_PROTOBUF_VERIFY_VERSION;

    // Construct Message
    SDOverallMsg sd_overall_msg;
    ApDrivingData ap_driving_data;
    string serialized_ap_driving_data;
    if(!serialize_json("../test/ap_sr_period_data.json", &ap_driving_data, &serialized_ap_driving_data)){
        cout << "Serialize ap_sr_period_data failed, quit." << endl;
        return 0;
    } 

    cout << "|===========Message Ready=========|" << endl; 
    cout << ap_driving_data.DebugString() << endl;
    cout << "|===========Message Ready=========|" << endl;

    ap_driving_data_payload = vsomeip::runtime::get()->create_payload();
    ap_driving_data_payload->set_data(vector<vsomeip::byte_t>(serialized_ap_driving_data.begin(), serialized_ap_driving_data.end()));

    app = vsomeip::runtime::get()->create_application("server");
    app->init();
    // app->register_message_handler(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, SAMPLE_METHOD_ID, on_message);
    app->offer_service(SR_SERVICE_ID, SR_INSTANCE_ID);
    set<vsomeip::eventgroup_t> its_groups;
    its_groups.insert(SR_EVENTGROUP_ID);
    app->offer_event(SR_SERVICE_ID, SR_INSTANCE_ID, AP_SR_PERIOD_DATA_EVENT_ID, its_groups);
    thread sender(run);
    app->start();

    return 0;
}
