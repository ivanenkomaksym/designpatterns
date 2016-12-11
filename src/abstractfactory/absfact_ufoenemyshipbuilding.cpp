#include "abstractfactory/absfact_ufoenemyshipbuilding.h"

#include <factory/shiptype.h>
#include <abstractfactory/absfact_ufobossenemyship.h>
#include <abstractfactory/absfact_ufobossenemyshipfactory.h>
#include <abstractfactory/absfact_ufoenemyship.h>
#include <abstractfactory/absfact_ufoenemyshipfactory.h>

using namespace ABSFACT;

std::unique_ptr<BaseEnemyShip> UFOEnemyShipBuilding::makeEnemyShip(ShipType shipType)
{
    std::unique_ptr<BaseEnemyShip> enemyShip;

    switch (shipType)
    {
        case ShipType::UFO:
        {
            auto shipPartsFactory = std::make_unique<UFOEnemyShipFactory>();
            enemyShip = std::make_unique<UFOEnemyShip>(std::move(shipPartsFactory));
            enemyShip->setName("UFO Grunt Ship");
            break;
        }
        case ShipType::BIGUFO:
        {
            auto shipPartsFactory = std::make_unique<UFOBossEnemyShipFactory>();
            enemyShip = std::make_unique<UFOBossEnemyShip>(std::move(shipPartsFactory));
            enemyShip->setName("UFO Boss Ship");
            break;
        }
        default:
            break;
    }
    return std::move(enemyShip);
}
