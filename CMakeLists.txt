cmake_minimum_required (VERSION 3.13)

project(service-example LANGUAGES CXX)

# set(CMAKE_CXX_FLAGS "-g -std=c++0x")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

find_package(vsomeip3 REQUIRED)
find_package(Boost COMPONENTS system thread log REQUIRED)
find_package(Protobuf REQUIRED)

# Specify the source directory
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(SR20_DIR ${CMAKE_SOURCE_DIR}/sr2_0)
set(PROTOAP_DIR ${CMAKE_SOURCE_DIR}/proto_ap)

# Find all .cpp files in the src directory
file(GLOB_RECURSE PROTO_SOURCES 
    ${SR20_DIR}/*.cc
    ${PROTOAP_DIR}/*.cc
    )

include_directories (
    ${CMAKE_SOURCE_DIR}
    ${SR20_DIR}
    )

add_executable(service-example 
    ${SRC_DIR}/service-example-rr.cpp
    ${SRC_DIR}/serialization/serialize_json.cpp
    ${PROTO_SOURCES}
    )

target_link_libraries(service-example vsomeip3 ${Boost_LIBRARIES} ${Protobuf_LIBRARIES})

add_executable(client-example ${SRC_DIR}/client-example-rr.cpp)
target_link_libraries(client-example vsomeip3 ${Boost_LIBRARIES})
