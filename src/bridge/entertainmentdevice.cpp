#include "bridge/entertainmentdevice.h"

#include <iostream>

void EntertainmentDevice::buttonSevenPressed()
{
    m_volumeLevel++;
    std::cout << "Volume at: " << m_volumeLevel << std::endl;
}

void EntertainmentDevice::buttonEightPressed()
{
    m_volumeLevel--;
    std::cout << "Volume at: " << m_volumeLevel << std::endl;
}

void EntertainmentDevice::deviceFeedback()
{
    if (m_deviceState > m_maxSetting || m_deviceState < 0)
        m_deviceState = 0;
    std::cout << "On Channel " << m_deviceState << std::endl;
}
