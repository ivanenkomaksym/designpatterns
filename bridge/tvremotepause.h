#ifndef TVREMOTEPAUSE_H
#define TVREMOTEPAUSE_H

#include "bridge/remotebutton.h"

class TVRemotePause : public RemoteButton
{
public:
    explicit TVRemotePause(EntertainmentDevice &newDevice);

    virtual void buttonNinePressed() override;
};

#endif // TVREMOTEPAUSE_H
