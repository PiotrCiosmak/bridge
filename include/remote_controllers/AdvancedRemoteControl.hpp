#pragma once

#include "RemoteControl.hpp"

class AdvancedRemoteControl : public RemoteControl
{
public:
    explicit AdvancedRemoteControl(const std::shared_ptr<Device>& device);
    void mute();
};
