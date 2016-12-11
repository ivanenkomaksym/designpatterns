#ifndef ENEMYSHIPFACTORY_H
#define ENEMYSHIPFACTORY_H

namespace ABSFACT
{
    class ESWeapon;
    class ESEngine;

    class EnemyShipFactory
    {
    public:
        explicit EnemyShipFactory() = default;
        virtual ~EnemyShipFactory() = default;

        virtual std::unique_ptr<ESWeapon> addESGun() = 0;
        virtual std::unique_ptr<ESEngine> addESEngine() = 0;
    };
}

#endif // ENEMYSHIPFACTORY_H
