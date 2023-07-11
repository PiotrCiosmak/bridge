cmake_minimum_required(VERSION 3.25)
project(bridge)

set(CMAKE_CXX_STANDARD 23)

add_executable(bridge main.cpp include/devices/Device.hpp src/devices/Radio.cpp src/devices/Tv.cpp src/remote_controllers/RemoteControl.cpp src/remote_controllers/AdvancedRemoteControl.cpp)
