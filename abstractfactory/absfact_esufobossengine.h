#ifndef ESUFOBOSSENGINE_H
#define ESUFOBOSSENGINE_H

#include "abstractfactory/absfact_esengine.h"

namespace ABSFACT
{
    class ESUFOBossEngine : public ESEngine
    {
    public:
        virtual std::string toString() override
        {
            return "2000 mph";
        }
    };
}

#endif // ESUFOBOSSENGINE_H
