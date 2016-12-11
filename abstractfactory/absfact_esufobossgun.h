#ifndef ESUFOBOSSGUN_H
#define ESUFOBOSSGUN_H

#include "abstractfactory/absfact_esweapon.h"

namespace ABSFACT
{
    class ESUFOBossGun : public ESWeapon
    {
    public:
        virtual std::string toString() override
        {
            return "40 damage";
        }
    };
}

#endif // ESUFOBOSSGUN_H
