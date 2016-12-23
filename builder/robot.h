#ifndef ROBOT_H
#define ROBOT_H

#include "builder/robotplan.h"

class Robot : public RobotPlan
{
public:
    explicit Robot() = default;
    virtual ~Robot() = default;

private:
    // --- from RobotPlan ---
    virtual const std::string &getRobotHead() const override { return m_robotHead; }
    virtual const std::string &getRobotTorso() const override { return m_robotTorso; }
    virtual const std::string &getRobotArms() const override { return m_robotArms; }
    virtual const std::string &getRobotLegs() const override { return m_robotLegs; }

    virtual void setRobotHead(const std::string &head) override
    { m_robotHead = head; }

    virtual void setRobotTorso(const std::string &torso) override
    { m_robotTorso = torso; }

    virtual void setRobotArms(const std::string &arms) override
    { m_robotArms = arms; }

    virtual void setRobotLegs(const std::string &legs) override
    { m_robotLegs = legs; }

    std::string m_robotHead;
    std::string m_robotTorso;
    std::string m_robotArms;
    std::string m_robotLegs;
};

#endif // ROBOT_H
