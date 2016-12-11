#include "factory/enemyship.h"

#include <iostream>

std::string EnemyShip::name() const
{
    return m_name;
}

void EnemyShip::setName(const std::string &name)
{
    m_name = name;
}

double EnemyShip::damage() const
{
    return m_damage;
}

void EnemyShip::setDamage(double damage)
{
    m_damage = damage;
}

void EnemyShip::followHeroShip() const
{
    std::cout << name() << " is following the hero" << std::endl;
}

void EnemyShip::displayEnemyShip() const
{
    std::cout << name() << " is on the screen" << std::endl;
}

void EnemyShip::enemyShipShoots() const
{
    std::cout << name() << " attacks and does " << damage() << " damage to hero" << std::endl;
}
