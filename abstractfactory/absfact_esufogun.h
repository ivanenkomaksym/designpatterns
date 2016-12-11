#ifndef ESUFOGUN_H
#define ESUFOGUN_H

#include "abstractfactory/absfact_esweapon.h"

namespace ABSFACT
{
    class ESUFOGun : public ESWeapon
    {
    public:
        virtual std::string toString() override
        {
            return "20 damage";
        }
    };
}

#endif // ESUFOGUN_H
