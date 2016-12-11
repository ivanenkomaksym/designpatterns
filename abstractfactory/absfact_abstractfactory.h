#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "abstractfactory/absfact_ufoenemyshipbuilding.h"
#include "abstractfactory/absfact_baseenemyship.h"
#include "factory/shiptype.h"

using namespace ABSFACT;

/*!
 * What is the Abstract Factory Pattern
 *
 * It is like a factory, but everything is encapsulated
 * The method that orders the object
 * The factories that build the object
 * The final objects
 * The final objects contain objects that use Strategy Pattern
 *  Composition: Object class fields are objects
 *
 * What can you do with an Abstract Factory
 *
 * Allows you to create families of related objects without
 * specifying a concrete class
 * Use when you have many objects that can be added, or changed
 * dynamically during runtime
 * You can model anything you can imagine and have those objects
 * interact though common interfaces
 * The Bad: Things can get complicated
 */

void abstractfactorypattern()
{
    auto makeUFOs = std::make_unique<UFOEnemyShipBuilding>();

    auto theGrunt = makeUFOs->orderTheShip(ShipType::UFO);
    std::cout << theGrunt->toString() << std::endl;

    auto theBoss = makeUFOs->orderTheShip(ShipType::BIGUFO);
    std::cout << theBoss->toString() << std::endl;
}

#endif // ABSTRACTFACTORY_H
