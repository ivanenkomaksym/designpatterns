#ifndef UFOBOSSENEMYSHIPFACTORY_H
#define UFOBOSSENEMYSHIPFACTORY_H

#include "abstractfactory/absfact_enemyshipfactory.h"
#include "abstractfactory/absfact_esufobossengine.h"
#include "abstractfactory/absfact_esufobossgun.h"

namespace ABSFACT
{
    class UFOBossEnemyShipFactory : public EnemyShipFactory
    {
    public:
        virtual std::unique_ptr<ESWeapon> addESGun() override
        {
            return std::make_unique<ESUFOBossGun>();
        }

        virtual std::unique_ptr<ESEngine> addESEngine() override
        {
            return std::make_unique<ESUFOBossEngine>();
        }
    };
}

#endif // UFOENEMYSHIPFACTORY_H
