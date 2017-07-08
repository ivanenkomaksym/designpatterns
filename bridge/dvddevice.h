#ifndef DVDDEVICE_H
#define DVDDEVICE_H

#include "bridge/entertainmentdevice.h"

class DVDDevice : public EntertainmentDevice
{
public:
    explicit DVDDevice(int newDeviceState, int newMaxSetting);
    virtual ~DVDDevice() = default;

    virtual void buttonFivePressed() override;
    virtual void buttonSixPressed() override;
};

#endif // DVDDEVICE_H
