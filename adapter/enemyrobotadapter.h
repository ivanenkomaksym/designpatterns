#ifndef ENEMYROBOTADAPTER_H
#define ENEMYROBOTADAPTER_H

#include "adapter/enemyattacker.h"

class EnemyRobot;

class EnemyRobotAdapter : public EnemyAttacker
{
public:
    explicit EnemyRobotAdapter(EnemyRobot &newRobot);
    virtual ~EnemyRobotAdapter() = default;

    void fireWeapon();
    void driveForward();
    void assignDriver(const std::string &driverName);

private:
    EnemyRobot &m_newRobot;
};

#endif // ENEMYROBOTADAPTER_H
