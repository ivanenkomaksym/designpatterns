#ifndef UFOENEMYSHIP_H
#define UFOENEMYSHIP_H

#include "enemyship.h"

class UFOEnemyShip : public EnemyShip
{
public:
    UFOEnemyShip()
    {
        setName("UFO Enemy Ship");
        setDamage(20.0);
    }
};

#endif // UFOENEMYSHIP_H
