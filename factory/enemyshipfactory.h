#ifndef ENEMYSHIPFACTORY_H
#define ENEMYSHIPFACTORY_H

#include "shiptype.h"

#include <memory>

class EnemyShip;

class EnemyShipFactory
{
public:
    explicit EnemyShipFactory() = default;
    ~EnemyShipFactory() = default;

    std::unique_ptr<EnemyShip> makeEnemyShip(ShipType shipType);
};

#endif // ENEMYSHIPFACTORY_H
