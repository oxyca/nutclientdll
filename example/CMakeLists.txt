cmake_minimum_required(VERSION 3.16)
project(upsinfo)

set(CMAKE_CXX_STANDARD 17)

add_executable(upsinfo main.cpp)
target_link_libraries(upsinfo nutclient)