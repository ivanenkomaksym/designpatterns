#ifndef REMOTEBUTTON_H
#define REMOTEBUTTON_H

class EntertainmentDevice;

class RemoteButton
{
public:
    explicit RemoteButton(EntertainmentDevice &newDevice);
    ~RemoteButton() = default;

    virtual void buttonNinePressed() = 0;

    void buttonFivePressed();
    void buttonSixPressed();
    void deviceFeedback();

private:
    EntertainmentDevice &m_theDevice;
};

#endif // REMOTEBUTTON_H
