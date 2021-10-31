cmake_minimum_required(VERSION 3.20)
project(nutclient)

set(CMAKE_CXX_STANDARD 17)
add_library(nutclient SHARED nutclient.cpp)
if (WIN32)
target_link_libraries(nutclient Ws2_32.dll)
endif(WIN32)