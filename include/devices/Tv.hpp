#pragma once

#include <iostream>
#include "Device.hpp"

class Tv : public Device
{
public:
    [[nodiscard]] int getVolume() override;
    void setVolume(int volume) override;
};
