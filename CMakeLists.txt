cmake_minimum_required(VERSION 3.25)
project(bridge)

set(CMAKE_CXX_STANDARD 23)

add_executable(bridge main.cpp include/devices/Device.hpp include/devices/Radio.hpp src/devices/Radio.cpp include/devices/Tv.hpp src/devices/Tv.cpp include/remote_controllers/RemoteControl.hpp src/remote_controllers/RemoteControl.cpp include/remote_controllers/AdvancedRemoteControl.hpp src/remote_controllers/AdvancedRemoteControl.cpp)