#ifndef ENTERTAINMENTDEVICE_H
#define ENTERTAINMENTDEVICE_H

class EntertainmentDevice
{
public:
    virtual ~EntertainmentDevice() = default;

    virtual void buttonFivePressed() = 0;
    virtual void buttonSixPressed() = 0;
    virtual void buttonSevenPressed();
    virtual void buttonEightPressed();

    virtual void deviceFeedback();

    int m_deviceState;
    int m_maxSetting;
    int m_volumeLevel;
};

#endif // ENTERTAINMENTDEVICE_H
