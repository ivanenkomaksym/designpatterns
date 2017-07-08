#include "bridge/dvddevice.h"

#include <iostream>

DVDDevice::DVDDevice(int newDeviceState, int newMaxSetting)
{
    m_deviceState = newDeviceState;
    m_maxSetting = newMaxSetting;
}

void DVDDevice::buttonFivePressed()
{
    std::cout << "DVD skips to Chapter" << std::endl;
    m_deviceState--;
}

void DVDDevice::buttonSixPressed()
{
    std::cout << "DVD skips to Next Chapter" << std::endl;
    m_deviceState++;
}
