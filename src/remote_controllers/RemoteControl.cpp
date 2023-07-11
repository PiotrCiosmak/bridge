#include "../../include/remote_controllers/RemoteControl.hpp"

RemoteControl::RemoteControl(const std::shared_ptr<Device>& device) : device{device}
{}

int RemoteControl::volumeDown()
{
    device->setVolume(device->getVolume() - 1);
    return device->getVolume();
}

int RemoteControl::volumeUp()
{
    device->setVolume(device->getVolume() + 1);
    return device->getVolume();
}
