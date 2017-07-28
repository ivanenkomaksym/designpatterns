#ifndef RECTFACTORY_H
#define RECTFACTORY_H

#include "flyweight/myrect2.h"

#include <unordered_map>

class RectFactory
{
public:
    MyRect2 &getRect(Color color)
    {
        auto findIt = m_rectsByColor.find(color);
        if (findIt != m_rectsByColor.end())
            return *findIt->second;
        auto result = m_rectsByColor.emplace(color, std::make_unique<MyRect2>(color));
        return *result.first->second;
    }

private:
    struct EnumClassHash
    {
        template <typename T>
        std::size_t operator()(T t) const
        {
            return static_cast<std::size_t>(t);
        }
    };

    std::unordered_map<Color, std::unique_ptr<MyRect2>, EnumClassHash> m_rectsByColor;
};

#endif // RECTFACTORY_H
