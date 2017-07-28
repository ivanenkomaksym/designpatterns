#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include "flyweight/flyweighttest.h"

#include <iostream>

/*!
 * What is the Flyweight Pattern
 *
 * Used when you need to create a large number of similar objects
 *
 * To reduce memory usega you share Objects that are similar in
 * some way rather than creating new ones
 *
 * Intrinsic State: Color
 * Extrinsic State: Size
 */

void flyweightPattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "=======================Flyweight Pattern====================" << std::endl;

    FlyweightTest drawer;
    drawer.draw();

    std::cout << "=======================Flyweight Pattern====================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // FLYWEIGHT_H
