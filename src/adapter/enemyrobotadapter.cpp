#include "adapter/enemyrobotadapter.h"

#include "adapter/enemyrobot.h"

EnemyRobotAdapter::EnemyRobotAdapter(EnemyRobot &newRobot)
    : m_newRobot(newRobot)
{
}

void EnemyRobotAdapter::fireWeapon()
{
    m_newRobot.smashWithHands();
}

void EnemyRobotAdapter::driveForward()
{
    m_newRobot.walkForward();
}

void EnemyRobotAdapter::assignDriver(const std::string &driverName)
{
    m_newRobot.reactToHuman(driverName);
}
