#ifndef ENEMYTANK_H
#define ENEMYTANK_H

#include "adapter/enemyattacker.h"

class EnemyTank : public EnemyAttacker
{
public:
    explicit EnemyTank() = default;
    virtual ~EnemyTank() = default;

    virtual void fireWeapon() override;
    virtual void driveForward() override;
    virtual void assignDriver(const std::string &driverName) override;
};

#endif // ENEMYTANK_H
