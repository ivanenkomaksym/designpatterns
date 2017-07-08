#include "adapter/enemyrobot.h"

#include <iostream>

void EnemyRobot::smashWithHands()
{
    auto attackDamage = 8;
    std::cout << "Enemy Robot Causes " << attackDamage << " Damage with its hands" << std::endl;
}

void EnemyRobot::walkForward()
{
    auto movement = 3;
    std::cout << "Enemy Robot Walks Forward " << movement << " Spaces" << std::endl;
}

void EnemyRobot::reactToHuman(const std::string &driverName)
{
    std::cout << "Enemy Robot Tramps on " << driverName << std::endl;
}
