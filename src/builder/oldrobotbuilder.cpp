#include "builder/oldrobotbuilder.h"

#include <builder/robot.h>

OldRobotBuilder::OldRobotBuilder()
    : m_robot(std::make_unique<Robot>())
{
}

void OldRobotBuilder::buildRobotHead()
{
    m_robot->setRobotHead("Tin Head");
}

void OldRobotBuilder::buildRobotTorso()
{
    m_robot->setRobotTorso("Tin Torso");
}

void OldRobotBuilder::buildRobotArms()
{
    m_robot->setRobotArms("Tin Arms");
}

void OldRobotBuilder::buildRobotLegs()
{
    m_robot->setRobotLegs("Tin Legs");
}

RobotPlan &OldRobotBuilder::getRobot() const
{
    return *m_robot;
}
