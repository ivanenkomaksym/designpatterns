#ifndef BIGUFOENEMYSHIP_H
#define BIGUFOENEMYSHIP_H

#include "enemyship.h"


class BigUFOEnemyShip : public EnemyShip
{
public:
    explicit BigUFOEnemyShip()
    {
        setName("Big UFO Enemy Ship");
        setDamage(40.0);
    }
};

#endif // BIGUFOENEMYSHIP_H
