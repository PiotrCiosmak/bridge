#include <iostream>
#include <memory>
#include "include/devices/Tv.hpp"
#include "include/devices/Radio.hpp"
#include "include/remote_controllers/AdvancedRemoteControl.hpp"

int main()
{
    std::unique_ptr<Device> device{std::make_unique<Tv>()};
    std::unique_ptr<RemoteControl> remove_control{std::make_unique<RemoteControl>(std::move(device))};

    remove_control->volumeUp();
    remove_control->volumeUp();
    remove_control->volumeDown();
    std::cout << std::endl << std::endl;

    device = std::make_unique<Radio>();

    remove_control->volumeUp();
    remove_control->volumeUp();
    remove_control->volumeDown();
    std::cout << std::endl << std::endl;


    std::unique_ptr<AdvancedRemoteControl> advanced_remove_control{std::make_unique<AdvancedRemoteControl>(std::move(device))};
    advanced_remove_control->volumeUp();
    advanced_remove_control->volumeUp();
    advanced_remove_control->volumeDown();
    advanced_remove_control->mute();
    std::cout << std::endl << std::endl;

    device = std::make_unique<Tv>();
    advanced_remove_control->volumeUp();
    advanced_remove_control->volumeUp();
    advanced_remove_control->volumeDown();
    advanced_remove_control->mute();
    std::cout << std::endl << std::endl;
}
