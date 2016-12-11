#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "abstractfactory/absfact_ufoenemyshipbuilding.h"
#include "abstractfactory/absfact_baseenemyship.h"
#include "factory/shiptype.h"

using namespace ABSFACT;

void abstractfactorypattern()
{
    auto makeUFOs = std::make_unique<UFOEnemyShipBuilding>();

    auto theGrunt = makeUFOs->orderTheShip(ShipType::UFO);
    std::cout << theGrunt->toString() << std::endl;

    auto theBoss = makeUFOs->orderTheShip(ShipType::BIGUFO);
    std::cout << theBoss->toString() << std::endl;
}

#endif // ABSTRACTFACTORY_H
