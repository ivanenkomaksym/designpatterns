#include "adapter/enemytank.h"

#include <iostream>

void EnemyTank::fireWeapon()
{
    auto attackDamage = 4;
    std::cout << "Enemy Tank Does " << attackDamage << " Damage" << std::endl;
}

void EnemyTank::driveForward()
{
    auto movement = 1;
    std::cout << "Enemy Tank moves " << movement << std::endl;
}

void EnemyTank::assignDriver(const std::string &driverName)
{
    std::cout << driverName << " is driving the tank" << std::endl;
}
