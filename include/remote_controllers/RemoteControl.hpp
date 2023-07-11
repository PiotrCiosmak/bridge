#pragma once

#include <memory>
#include "../devices/Device.hpp"

class RemoteControl
{
public:
    explicit RemoteControl(const std::shared_ptr<Device>& device);
    [[nodiscard]] int volumeDown();
    [[nodiscard]] int volumeUp();
    virtual ~RemoteControl() = default;

protected:
    std::shared_ptr<Device> device;
};
