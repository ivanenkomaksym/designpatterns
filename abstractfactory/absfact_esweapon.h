#ifndef ESWEAPON_H
#define ESWEAPON_H

#include <string>

namespace ABSFACT
{
    class ESWeapon
    {
    public:
        explicit ESWeapon() = default;
        virtual ~ESWeapon() = default;

        virtual std::string toString() = 0;
    };
}

#endif // ESWEAPON_H
