#include "../../include/remote_controllers/AdvancedRemoteControl.hpp"

AdvancedRemoteControl::AdvancedRemoteControl(const std::shared_ptr<Device>& device)
        : RemoteControl{device}
{}

void AdvancedRemoteControl::mute()
{
    device->setVolume(0);
}

