#pragma once

#include <iostream>
#include "Device.hpp"

class Radio : public Device
{
public:
    [[nodiscard]] int getVolume() override;
    void setVolume(int volume) override;
};
