#ifndef ESENGINE_H
#define ESENGINE_H

#include <string>

namespace ABSFACT
{
    class ESEngine
    {
    public:
        explicit ESEngine() = default;
        virtual ~ESEngine() = default;

        virtual std::string toString() = 0;
    };
}

#endif // ESENGINE_H
