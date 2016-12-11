#include "factory/enemyshipfactory.h"

#include "factory/bigufoenemyship.h"
#include "factory/rocketenemyship.h"
#include "factory/ufoenemyship.h"

std::unique_ptr<EnemyShip> EnemyShipFactory::makeEnemyShip(ShipType shipType)
{
    switch (shipType)
    {
    case ShipType::BIGUFO:
        return std::make_unique<BigUFOEnemyShip>();
    case ShipType::ROCKET:
        return std::make_unique<RocketEnemyShip>();
    case ShipType::UFO:
        return std::make_unique<UFOEnemyShip>();
    default:
        return nullptr;
    }
}
