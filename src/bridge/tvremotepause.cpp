#include "bridge/tvremotepause.h"

#include <iostream>

TVRemotePause::TVRemotePause(EntertainmentDevice &newDevice)
    : RemoteButton(newDevice)
{
}

void TVRemotePause::buttonNinePressed()
{
    std::cout << "TV was Paused" << std::endl;
}
