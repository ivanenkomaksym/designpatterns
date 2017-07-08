#include "bridge/tvremotemute.h"

#include <iostream>

TVRemoteMute::TVRemoteMute(EntertainmentDevice &newDevice)
    : RemoteButton(newDevice)
{
}

void TVRemoteMute::buttonNinePressed()
{
    std::cout << "TV was Muted" << std::endl;
}
