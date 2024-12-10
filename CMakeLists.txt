cmake_minimum_required (VERSION 3.13)

project(service-example LANGUAGES CXX)
project(client-example LANGUAGES CXX)


set (CMAKE_CXX_FLAGS "-g -std=c++0x")

find_package (vsomeip3 3.4.10 REQUIRED)
find_package( Boost 1.55 COMPONENTS system thread log REQUIRED )
message("Vsomeip include dir:  ${VSOMEIP_INCLUDE_DIRS}")


include_directories (
    ${Boost_INCLUDE_DIR}
    ${VSOMEIP_INCLUDE_DIRS}
)

add_executable(service-example ../src/service-example-rr.cpp)
target_link_libraries(service-example vsomeip3 ${Boost_LIBRARIES})

# add_executable(client-example ../src/client-example-rr.cpp)
# target_link_libraries(client-example vsomeip3 ${Boost_LIBRARIES})
