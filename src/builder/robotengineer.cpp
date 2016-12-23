#include "builder/robotengineer.h"

#include <builder/robotbuilder.h>

RobotEngineer::RobotEngineer(RobotBuilder &robotBuilder)
    : m_robotBuilder(robotBuilder)
{
}

RobotPlan &RobotEngineer::getRobot()
{
    return m_robotBuilder.getRobot();
}

void RobotEngineer::makeRobot()
{
    m_robotBuilder.buildRobotHead();
    m_robotBuilder.buildRobotTorso();
    m_robotBuilder.buildRobotArms();
    m_robotBuilder.buildRobotLegs();
}
