#ifndef BUILDER_H
#define BUILDER_H

#include <iostream>

#include "builder/oldrobotbuilder.h"
#include "builder/robotengineer.h"
#include "builder/robotplan.h"

/*!
 * What is the Builder Pattern
 *
 * Pattern used to create objects made from a bunch of other objects
 * When you want to build an object made up from other objects
 * When you want to the creation of these parts be independent of the main object
 * Hide the creation of the parts from the client so both aren't dependent
 * The builder know the specifics and nobody else does
 */

void builderPattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "========================Builder Pattern=====================" << std::endl;
    auto oldStyleRobot = std::make_unique<OldRobotBuilder>();
    auto robotEngineer = std::make_unique<RobotEngineer>(*oldStyleRobot);

    robotEngineer->makeRobot();

    auto &firstRobot = robotEngineer->getRobot();

    std::cout << "Robot Build" << std::endl
              << "Robot Head Type: " << firstRobot.getRobotHead() << std::endl
              << "Robot Torso Type: " << firstRobot.getRobotTorso() << std::endl
              << "Robot Arms Type: " << firstRobot.getRobotArms() << std::endl
              << "Robot Legs Type: " << firstRobot.getRobotLegs() << std::endl
              << std::endl;
    std::cout << "========================Builder Pattern=====================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // BUILDER_H
