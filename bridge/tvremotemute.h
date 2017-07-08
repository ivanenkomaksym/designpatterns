#ifndef TVREMOTEMUTE_H
#define TVREMOTEMUTE_H

#include "bridge/remotebutton.h"

class TVRemoteMute : public RemoteButton
{
public:
    explicit TVRemoteMute(EntertainmentDevice &newDevice);

    virtual void buttonNinePressed() override;
};

#endif // TVREMOTEMUTE_H
