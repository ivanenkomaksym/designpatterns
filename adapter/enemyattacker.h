#ifndef ENEMYATTACKER_H
#define ENEMYATTACKER_H

#include <string>

class EnemyAttacker
{
public:
    virtual ~EnemyAttacker() = default;

    virtual void fireWeapon() = 0;
    virtual void driveForward() = 0;
    virtual void assignDriver(const std::string &driverName) = 0;
};

#endif // ENEMYATTACKER_H
