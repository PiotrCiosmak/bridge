#include "../../include/remote_controllers/AdvancedRemoteControl.hpp"

AdvancedRemoteControl::AdvancedRemoteControl(std::unique_ptr<Device> device) : RemoteControl{std::move(device)}
{}

void AdvancedRemoteControl::mute()
{
    device->setVolume(0);
}

