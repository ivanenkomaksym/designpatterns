#ifndef DVDREMOTE_H
#define DVDREMOTE_H

#include "bridge/remotebutton.h"

class DVDRemote : public RemoteButton
{
public:
    explicit DVDRemote(EntertainmentDevice &newDevice);

    virtual void buttonNinePressed() override;

private:
    bool m_play = true;
};

#endif // DVDREMOTE_H
