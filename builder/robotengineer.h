#ifndef ROBOTENGINEER_H
#define ROBOTENGINEER_H

#include <memory>

class RobotBuilder;
class RobotPlan;

class RobotEngineer
{
public:
    explicit RobotEngineer(RobotBuilder &robotBuilder);
    ~RobotEngineer() = default;

    RobotPlan &getRobot();

    void makeRobot();

private:
    RobotBuilder &m_robotBuilder;
};

#endif // ROBOTENGINEER_H
