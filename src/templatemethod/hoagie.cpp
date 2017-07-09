#include "templatemethod/hoagie.h"

#include <iostream>

void Hoagie::makeSandwich()
{
    cutBun();

    if (customerWantsMeat())
        addMeat();

    if (customerWantsCheese())
        addCheese();

    if (customerWantsVegetables())
        addVegetables();

    if (customerWantsCondiments())
        addCondiments();

    wrapTheHoagie();
}

void Hoagie::cutBun()
{
    std::cout << "Cut the Bun" << std::endl;
}

void Hoagie::wrapTheHoagie()
{
    std::cout << "Wrap the Hoagie" << std::endl;
}
