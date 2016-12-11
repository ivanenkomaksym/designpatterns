#ifndef ESUFOENGINE_H
#define ESUFOENGINE_H

#include "abstractfactory/absfact_esengine.h"

namespace ABSFACT
{
    class ESUFOEngine : public ESEngine
    {
    public:
        virtual std::string toString() override
        {
            return "1000 mph";
        }
    };
}

#endif // ESUFOENGINE_H
