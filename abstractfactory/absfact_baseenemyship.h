#ifndef BASEENEMYSHIP_H
#define BASEENEMYSHIP_H

#include "factory/enemyship.h"

#include "abstractfactory/absfact_esengine.h"
#include "abstractfactory/absfact_esweapon.h"

namespace ABSFACT
{
    class BaseEnemyShip : public EnemyShip
    {
    public:
        explicit BaseEnemyShip() = default;
        virtual ~BaseEnemyShip() = default;

        virtual void makeShip() = 0;

        virtual std::string toString()
        {
            return "The " + name() + " has a top speed of " + m_engine->toString() +
                   " and an attach power of " + m_weapon->toString();
        }

    protected:
        std::unique_ptr<ESWeapon> m_weapon;
        std::unique_ptr<ESEngine> m_engine;
    };
}

#endif // BASEENEMYSHIP_H
