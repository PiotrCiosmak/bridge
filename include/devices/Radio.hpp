#pragma once

#include "Device.hpp"

class Radio : public Device
{
public:
    int getVolume() override;
    void setVolume(int volume) override;
};
