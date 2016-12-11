#ifndef ROCKETENEMYSHIP_H
#define ROCKETENEMYSHIP_H

#include "enemyship.h"

class RocketEnemyShip : public EnemyShip
{
public:
    explicit RocketEnemyShip()
    {
        setName("Rocket Enemy Ship");
        setDamage(10.0);
    }
};

#endif // ROCKETENEMYSHIP_H
