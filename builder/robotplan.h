#ifndef ROBOTPLAN_H
#define ROBOTPLAN_H

#include <string>

class RobotPlan
{
public:
    virtual ~RobotPlan() = default;

    virtual const std::string &getRobotHead() const = 0;
    virtual const std::string &getRobotTorso() const = 0;
    virtual const std::string &getRobotArms() const = 0;
    virtual const std::string &getRobotLegs() const = 0;

    virtual void setRobotHead(const std::string &head) = 0;
    virtual void setRobotTorso(const std::string &torso) = 0;
    virtual void setRobotArms(const std::string &arms) = 0;
    virtual void setRobotLegs(const std::string &legs) = 0;
};

#endif // ROBOTPLAN_H
