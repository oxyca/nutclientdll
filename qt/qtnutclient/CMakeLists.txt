cmake_minimum_required(VERSION 3.5)

project(qtnutclient LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Network REQUIRED)

add_library(qtnutclient SHARED
  qtnutclient_global.h
  qtnutclient.cpp
  qtnutclient.h
  protocol.cpp
  protocol.h
)

target_link_libraries(qtnutclient PRIVATE Qt5::Core Qt5::Network)

target_compile_definitions(qtnutclient PRIVATE QTNUTCLIENT_LIBRARY)
