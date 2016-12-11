#ifndef UFOENEMYSHIP_H
#define UFOENEMYSHIP_H

#include "abstractfactory/absfact_baseenemyship.h"
#include "abstractfactory/absfact_enemyshipfactory.h"

#include <iostream>

namespace ABSFACT
{
    class UFOEnemyShip : public BaseEnemyShip
    {
    public:
        explicit UFOEnemyShip(std::unique_ptr<EnemyShipFactory> shipFactory)
            : m_shipFactory(std::move(shipFactory))
        {}
        virtual ~UFOEnemyShip() = default;

        virtual void makeShip() override
        {
            std::cout << "Making enemy ship " << name();

            m_weapon = m_shipFactory->addESGun();
            m_engine = m_shipFactory->addESEngine();
        }

    private:
        std::unique_ptr<EnemyShipFactory> m_shipFactory;
    };
}

#endif // UFOENEMYSHIP_H
