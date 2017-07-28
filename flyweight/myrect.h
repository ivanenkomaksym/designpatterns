#ifndef MYRECT_H
#define MYRECT_H

#include <thread>
#include <chrono>

enum class Color
{
    Orange,
    Red,
    Yellow,
    Blue,
    Pink,
    Cyan,
    Magenta,
    Black,
    Gray
};

class MyRect
{
public:
    explicit MyRect(Color color, int upperX, int upperY, int lowerX, int lowerY)
        : m_color(color)
        , m_upperX(upperX)
        , m_upperY(upperY)
        , m_lowerX(lowerX)
        , m_lowerY(lowerY)
    {}
    ~MyRect() = default;

    void draw() {}

private:
    Color   m_color;
    int     m_upperX;
    int     m_upperY;
    int     m_lowerX;
    int     m_lowerY;
};

#endif // MYRECT_H
