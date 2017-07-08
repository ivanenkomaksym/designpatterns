#include "bridge/remotebutton.h"

#include "bridge/entertainmentdevice.h"

RemoteButton::RemoteButton(EntertainmentDevice &newDevice)
    : m_theDevice(newDevice)
{
}

void RemoteButton::buttonFivePressed()
{
    m_theDevice.buttonFivePressed();
}

void RemoteButton::buttonSixPressed()
{
    m_theDevice.buttonSixPressed();
}

void RemoteButton::deviceFeedback()
{
    m_theDevice.deviceFeedback();
}
