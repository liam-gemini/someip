cmake_minimum_required (VERSION 3.13)

project(service-example LANGUAGES CXX)
# project(client-example LANGUAGES CXX)


set (CMAKE_CXX_FLAGS "-g -std=c++0x")

find_package (vsomeip3 3.4.10 REQUIRED)
find_package( Boost 1.55 COMPONENTS system thread log REQUIRED )

# Specify the source directory
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(SR20_DIR ${CMAKE_SOURCE_DIR}/sr2_0)

# Find all .cpp files in the src directory
set(PROTO_SOURCES ${SR20_DIR}/sd_overall.pb.cc
    ${SR20_DIR}/aeb_debug/aeb_debug.pb.cc
    ${SR20_DIR}/bp_hmi_output/bp_hmi_output.pb.cc
    ${SR20_DIR}/localpose/LocalPose.pb.cc
    ${SR20_DIR}/map_fusion/mf_lanes_for_scu.pb.cc
    ${SR20_DIR}/mf_localpose/MfLocalPose.pb.cc
    ${SR20_DIR}/mp_output/mp_output.pb.cc
    ${SR20_DIR}/online_map_fusion/online_local_map_fusion.pb.cc
    ${SR20_DIR}/sensor_fusion/sensor_fusion.pb.cc
    ${SR20_DIR}/state_manage/state_manage.pb.cc)

include_directories (
    ${Boost_INCLUDE_DIR}
    ${VSOMEIP_INCLUDE_DIRS}
    ./sr2_0
)

add_executable(service-example ${SRC_DIR}/service-example-rr.cpp ${PROTO_SOURCES})
target_link_libraries(service-example vsomeip3 ${Boost_LIBRARIES} protobuf)

# add_executable(client-example ../src/client-example-rr.cpp)
# target_link_libraries(client-example vsomeip3 ${Boost_LIBRARIES})
