#ifndef ENEMYSHIPFACTORY_H
#define ENEMYSHIPFACTORY_H

#include <memory>

class EnemyShip;

enum class ShipType
{
    DEFAULT,
    ROCKET,
    UFO,
    BIGUFO
};

class EnemyShipFactory
{
public:
    explicit EnemyShipFactory() = default;
    ~EnemyShipFactory() = default;

    std::unique_ptr<EnemyShip> makeEnemyShip(ShipType shipType);
};

#endif // ENEMYSHIPFACTORY_H
