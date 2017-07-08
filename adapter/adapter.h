#ifndef ADAPTER_H
#define ADAPTER_H

#include "adapter/enemyrobot.h"
#include "adapter/enemyrobotadapter.h"
#include "adapter/enemytank.h"

#include <iostream>

/*!
 * What is the Adapter Pattern
 *
 * Allows 2 incompatible interfaces to work together
 *
 * Used when the client expects a (target) interface
 *
 * The Adapter class allows the use of the available interface and the
 * Target interface
 *
 * Any class can work together as long as the Adapter solves the issue
 * that all classes must implement every method defined by the shared interface
 */

void adapterPattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "========================Adapter Pattern=====================" << std::endl;
    EnemyTank rx7Tank;
    EnemyRobot fredTheRobot;
    EnemyRobotAdapter robotAdapter(fredTheRobot);

    std::cout << "The Robot" << std::endl;
    fredTheRobot.reactToHuman("Paul");
    fredTheRobot.walkForward();
    fredTheRobot.smashWithHands();

    std::cout << "The Enemy Tank" << std::endl;
    rx7Tank.assignDriver("Frank");
    rx7Tank.driveForward();
    rx7Tank.fireWeapon();

    std::cout << "The Robot with Adapter" << std::endl;
    robotAdapter.assignDriver("Mark");
    robotAdapter.driveForward();
    robotAdapter.fireWeapon();
    std::cout << "========================Adapter Pattern=====================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // ADAPTER_H
