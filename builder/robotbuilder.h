#ifndef ROBOTBUILDER_H
#define ROBOTBUILDER_H

class RobotPlan;

class RobotBuilder
{
public:
    virtual ~RobotBuilder() = default;

    virtual void buildRobotHead() = 0;
    virtual void buildRobotTorso() = 0;
    virtual void buildRobotArms() = 0;
    virtual void buildRobotLegs() = 0;

    virtual RobotPlan &getRobot() const = 0;
};

#endif // ROBOTBUILDER_H
