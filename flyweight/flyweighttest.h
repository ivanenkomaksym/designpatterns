#ifndef FLYWEIGHTTEST_H
#define FLYWEIGHTTEST_H

#include "flyweight/myrect.h"
#include "flyweight/myrect2.h"
#include "flyweight/rectfactory.h"

#include <vector>
#include <stdlib.h>
#include <chrono>
#include <ctime>

class FlyweightTest
{
public:
    explicit FlyweightTest() = default;
    ~FlyweightTest() = default;

    void draw()
    {
        auto begin = std::chrono::steady_clock::now();

        for (auto i = 0; i < 100000; i++)
        {
            MyRect rect(getRandColor(), getRandX(), getRandY(), getRandX(), getRandY());
            //rect.draw();
        }

        auto end= std::chrono::steady_clock::now();
        std::cout << "Before that took " << std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count() << " ms" << std::endl;


        RectFactory rectFactory;
        auto begin2 = std::chrono::steady_clock::now();

        for (auto i = 0; i < 100000; i++)
        {
            auto &rect = rectFactory.getRect(getRandColor());
            //rect.draw(getRandX(), getRandY(), getRandX(), getRandY());
        }

        auto end2 = std::chrono::steady_clock::now();
        std::cout << "After that took " << std::chrono::duration_cast<std::chrono::milliseconds>(end2 - begin2).count() << " ms" << std::endl;
    }

private:
    int getRandX()
    {
        return static_cast<int>(std::rand() * m_windowWidth);
    }

    int getRandY()
    {
        return static_cast<int>(std::rand() * m_windowHeight);
    }

    Color getRandColor()
    {
        return m_colors[std::rand() % 9];
    }

    int m_windowWidth = 1750;
    int m_windowHeight = 1000;
    std::vector<Color> m_colors = {Color::Orange, Color::Red,
                                   Color::Yellow, Color::Blue,
                                   Color::Pink, Color::Cyan,
                                   Color::Magenta, Color::Black,
                                   Color::Gray};
};

#endif // FLYWEIGHTTEST_H
