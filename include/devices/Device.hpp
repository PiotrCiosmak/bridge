#pragma once

class Device
{
public:
    virtual int getVolume() = 0;
    virtual void setVolume(int volume) = 0;
    virtual ~Device() = default;
protected:
    int volume = 0;
};