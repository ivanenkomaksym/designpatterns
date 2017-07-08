#include "bridge/tvdevice.h"

#include <iostream>

TVDevice::TVDevice(int newDeviceState, int newMaxSetting)
{
    m_deviceState = newDeviceState;
    m_maxSetting = newMaxSetting;
}

void TVDevice::buttonFivePressed()
{
    std::cout << "Channel down" << std::endl;
    m_deviceState--;
}

void TVDevice::buttonSixPressed()
{
    std::cout << "Channel Up" << std::endl;
    m_deviceState++;
}
