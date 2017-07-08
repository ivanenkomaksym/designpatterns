#ifndef BRIDGE_H
#define BRIDGE_H

#include "bridge/tvdevice.h"
#include "bridge/dvddevice.h"
#include "bridge/tvremotemute.h"
#include "bridge/tvremotepause.h"
#include "bridge/dvdremote.h"

#include <iostream>
#include <memory>

/*!
 * What is the Bridge Pattern
 *
 * Decouple an abstraction from its implementation so that the two
 * can vary independently
 *
 * Progressively adding functionality while separating our major
 * differences using abstract classes
 *
 * When you want to be able to change both the abstractions (abstract
 * classes) and concrete classes independently
 *
 * When you want the first abstract class to define rules (Abstract TV)
 *
 * The concrete class adds additional rules (Concrete TV)
 *
 * An abstract class has a reference to the device and it defines
 * abstact methods that will be defined (Abstract Remote)
 *
 * The Concrete Remote defines the abstract methods required
 */

void bridgePattern()
{
    TVDevice tvDevice(1, 200);
    auto theTV = std::make_unique<TVRemoteMute>(tvDevice);
    auto theTV2 = std::make_unique<TVRemotePause>(tvDevice);

    DVDDevice dvdDevice(1, 14);
    auto theDVD = std::make_unique<DVDRemote>(dvdDevice);

    std::cout << "Test TV with Mute" << std::endl;
    theTV->buttonFivePressed();
    theTV->buttonSixPressed();
    theTV->buttonNinePressed();
    std::cout << std::endl;

    std::cout << "Test TV with Pause" << std::endl;
    theTV2->buttonFivePressed();
    theTV2->buttonSixPressed();
    theTV2->buttonNinePressed();
    theTV2->deviceFeedback();
    std::cout << std::endl;

    std::cout << "Test DVD" << std::endl;
    theDVD->buttonFivePressed();
    theDVD->buttonSixPressed();
    theDVD->buttonNinePressed();
    theDVD->buttonNinePressed();
    std::cout << std::endl;
}

#endif // BRIDGE_H
