#ifndef OLDROBOTBUILDER_H
#define OLDROBOTBUILDER_H

#include "builder/robotbuilder.h"

#include <memory>

class OldRobotBuilder : public RobotBuilder
{
public:
    explicit OldRobotBuilder();
    virtual ~OldRobotBuilder() = default;

private:
    // --- from RobotBuilder ---
    virtual void buildRobotHead() override;
    virtual void buildRobotTorso() override;
    virtual void buildRobotArms() override;
    virtual void buildRobotLegs() override;
    virtual RobotPlan &getRobot() const override;

    std::unique_ptr<RobotPlan> m_robot;
};

#endif // OLDROBOTBUILDER_H
