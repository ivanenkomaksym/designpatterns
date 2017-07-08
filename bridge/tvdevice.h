#ifndef TVDEVICE_H
#define TVDEVICE_H

#include "bridge/entertainmentdevice.h"

class TVDevice : public EntertainmentDevice
{
public:
    explicit TVDevice(int newDeviceState, int newMaxSetting);

    virtual void buttonFivePressed() override;
    virtual void buttonSixPressed() override;
};

#endif // TVDEVICE_H
