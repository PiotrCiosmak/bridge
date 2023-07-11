#include "include/devices/Tv.hpp"
#include "include/devices/Radio.hpp"
#include "include/remote_controllers/AdvancedRemoteControl.hpp"

int main()
{
    std::shared_ptr<Device> device = std::make_shared<Tv>();
    std::shared_ptr<RemoteControl> remove_control{std::make_shared<RemoteControl>(device)};

    remove_control->volumeUp();
    remove_control->volumeUp();
    remove_control->volumeDown();
    std::cout << std::endl;

    device = std::make_shared<Radio>();

    remove_control->volumeUp();
    remove_control->volumeUp();
    remove_control->volumeDown();
    std::cout << std::endl;


    std::shared_ptr<AdvancedRemoteControl> advanced_remove_control = std::make_shared<AdvancedRemoteControl>(device);
    advanced_remove_control->volumeUp();
    advanced_remove_control->volumeUp();
    advanced_remove_control->volumeDown();
    advanced_remove_control->mute();
    std::cout << std::endl;

    device = std::make_shared<Tv>();
    advanced_remove_control->volumeUp();
    advanced_remove_control->volumeUp();
    advanced_remove_control->volumeDown();
    advanced_remove_control->mute();
}
