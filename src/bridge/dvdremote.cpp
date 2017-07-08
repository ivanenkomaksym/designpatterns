#include "bridge/dvdremote.h"

#include <iostream>

DVDRemote::DVDRemote(EntertainmentDevice &newDevice)
    : RemoteButton(newDevice)
{
}

void DVDRemote::buttonNinePressed()
{
    m_play = !m_play;
    std::cout << "DVD is Plaing: " << m_play << std::endl;
}
