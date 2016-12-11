#ifndef ENEMYSHIPBUILDING_H
#define ENEMYSHIPBUILDING_H

#include <memory>

enum class ShipType;

namespace ABSFACT
{
class BaseEnemyShip;

    class EnemyShipBuilding
    {
    public:
        explicit EnemyShipBuilding() = default;
        virtual ~EnemyShipBuilding() = default;

        virtual std::unique_ptr<BaseEnemyShip> makeEnemyShip(ShipType shipType) = 0;
        virtual std::unique_ptr<BaseEnemyShip> orderTheShip(ShipType shipType);
    };
}

#endif // ENEMYSHIPBUILDING_H
