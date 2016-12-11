#ifndef UFOENEMYSHIPFACTORY_H
#define UFOENEMYSHIPFACTORY_H

#include "abstractfactory/absfact_enemyshipfactory.h"
#include "abstractfactory/absfact_esufoengine.h"
#include "abstractfactory/absfact_esufogun.h"

namespace ABSFACT
{
    class UFOEnemyShipFactory : public EnemyShipFactory
    {
    public:
        virtual std::unique_ptr<ESWeapon> addESGun() override
        {
            return std::make_unique<ESUFOGun>();
        }

        virtual std::unique_ptr<ESEngine> addESEngine() override
        {
            return std::make_unique<ESUFOEngine>();
        }
    };
}

#endif // UFOENEMYSHIPFACTORY_H
