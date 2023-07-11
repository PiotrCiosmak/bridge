#include <iostream>
#include "../../include/devices/Tv.hpp"

int Tv::getVolume()
{
    return volume;
}

void Tv::setVolume(int volume)
{
    std::cout<<"Tv volume changed"<<std::endl;
    this->volume=volume;
}
