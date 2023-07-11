#pragma once

#include <memory>
#include "../devices/Device.hpp"

class RemoteControl
{
public:
    explicit RemoteControl(std::unique_ptr<Device> device);
    int volumeDown();
    int volumeUp();
    virtual ~RemoteControl() = default;
protected:
    std::unique_ptr<Device> device;
};
