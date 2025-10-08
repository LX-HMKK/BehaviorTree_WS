cmake_minimum_required(VERSION 3.5)
project(simple_bt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(behaviortree_cpp REQUIRED)

add_executable(simple_bt simple_bt.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE behaviortree_cpp)