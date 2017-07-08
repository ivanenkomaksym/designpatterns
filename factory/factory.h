#ifndef FACTORY_H
#define FACTORY_H

#include "factory/bigufoenemyship.h"
#include "factory/rocketenemyship.h"
#include "factory/ufoenemyship.h"
#include "factory/enemyshipfactory.h"

#include <memory>

void doStuffEnemy(EnemyShip &enemyShip);

/*!
 * When to Use the Factory Pattern
 *
 * When a method returns one of several possible classes that share a
 * common super class
 *
 * Create a new enemy in a game
 *
 * Random number generator picks a number assigned to a specific enemy
 *
 * The factory returns the enemy assiciated with that number
 *
 * The class is chosen at run time
 */

void factorypattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "======================Factory Pattern=======================" << std::endl;
    auto enemy = std::unique_ptr<EnemyShip>();

//    auto enemyShipOption = std::string();
//    std::cout << "What type of ship? (U or R)";
//    std::cin >> enemyShipOption;

//    if (enemyShipOption == "U")
//        enemy = std::make_unique<UFOEnemyShip>();
//    else if (enemyShipOption == "R")
//        enemy = std::make_unique<RocketEnemyShip>();

    auto shipFactory = std::make_unique<EnemyShipFactory>();

    auto enemyShipOption = std::string();
    std::cout << "What type of ship? (U, R or B)";
    std::cin >> enemyShipOption;
    auto shipType = ShipType::DEFAULT;
    if (enemyShipOption == "U")
        shipType = ShipType::UFO;
    else if (enemyShipOption == "R")
        shipType = ShipType::ROCKET;
    else if (enemyShipOption == "B")
        shipType = ShipType::BIGUFO;

    enemy = shipFactory->makeEnemyShip(shipType);

    if (enemy.get())
        doStuffEnemy(*enemy);
    std::cout << "======================Factory Pattern=======================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

void doStuffEnemy(EnemyShip &enemyShip)
{
    enemyShip.displayEnemyShip();
    enemyShip.followHeroShip();
    enemyShip.enemyShipShoots();
}

#endif // FACTORY_H
