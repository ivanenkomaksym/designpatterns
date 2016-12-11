#include "abstractfactory/absfact_enemyshipbuilding.h"

#include <abstractfactory/absfact_baseenemyship.h>
#include <abstractfactory/absfact_ufoenemyship.h>

#include <factory/enemyship.h>
#include <factory/shiptype.h>

using namespace ABSFACT;

std::unique_ptr<BaseEnemyShip> EnemyShipBuilding::orderTheShip(ShipType shipType)
{
    auto enemyShip = makeEnemyShip(shipType);
    auto ufoenemyShip = dynamic_cast<UFOEnemyShip *>(enemyShip.get());

    enemyShip->makeShip();
    enemyShip->displayEnemyShip();
    enemyShip->followHeroShip();
    enemyShip->enemyShipShoots();

    return enemyShip;
}
