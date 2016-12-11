#ifndef UFOENEMYSHIPBUILDING_H
#define UFOENEMYSHIPBUILDING_H

#include "abstractfactory/absfact_enemyshipbuilding.h"

namespace ABSFACT
{
    class UFOEnemyShipBuilding : public EnemyShipBuilding
    {
    public:
        explicit UFOEnemyShipBuilding() = default;
        virtual ~UFOEnemyShipBuilding() = default;

        virtual std::unique_ptr<BaseEnemyShip> makeEnemyShip(ShipType shipType) override;
    };
}

#endif // UFOENEMYSHIPBUILDING_H
