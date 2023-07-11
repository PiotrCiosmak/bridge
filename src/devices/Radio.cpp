
#include "../../include/devices/Radio.hpp"

int Radio::getVolume()
{
    return volume;
}

void Radio::setVolume(int volume)
{
    std::cout << "Radio volume changed" << std::endl;
    this->volume = volume;
}
