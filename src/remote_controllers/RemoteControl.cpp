#include "../../include/remote_controllers/RemoteControl.hpp"

RemoteControl::RemoteControl(std::unique_ptr<Device> device) : device{std::move(device)}
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
