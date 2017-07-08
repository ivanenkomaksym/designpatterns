#ifndef ENEMYROBOT_H
#define ENEMYROBOT_H

#include <string>

class EnemyRobot
{
public:
    explicit EnemyRobot() = default;
    ~EnemyRobot() = default;

    void smashWithHands();
    void walkForward();
    void reactToHuman(const std::string &driverName);
};

#endif // ENEMYROBOT_H
