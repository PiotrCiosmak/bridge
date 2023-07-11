#pragma once

#include "Device.hpp"

class Tv : public Device
{
public:
    int getVolume() override;
    void setVolume(int volume) override;
};
