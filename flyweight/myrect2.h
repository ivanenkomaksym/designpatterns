#ifndef MYRECT2_H
#define MYRECT2_H

#include "flyweight/myrect.h"

class MyRect2
{
public:
    explicit MyRect2(Color color)
        : m_color(color)
    {}

    MyRect2(const MyRect2&) = delete;
    MyRect2 &operator=(const MyRect2&) = delete;

    MyRect2(MyRect2 &&) = delete;
    MyRect2 &operator=(MyRect2 &&) = delete;

    void draw(int upperX, int upperY, int lowerX, int lowerY){}

private:
    Color   m_color;
    int     m_upperX;
    int     m_upperY;
    int     m_lowerX;
    int     m_lowerY;
};

#endif // MYRECT2_H
