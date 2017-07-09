#include "templatemethod/italianhoagie.h"

#include <iostream>

void ItalianHoagie::addMeat()
{
    std::cout << "Adding the Meat: ";
    for (auto &meat : m_meatUsed)
        std::cout << meat << " ";
    std::cout << std::endl;
}

void ItalianHoagie::addCheese()
{
    std::cout << "Adding the Cheese: ";
    for (auto &cheese : m_cheeseUsed)
        std::cout << cheese << " ";
    std::cout << std::endl;
}

void ItalianHoagie::addVegetables()
{
    std::cout << "Adding the Veggies: ";
    for (auto &veggies : m_veggiesUsed)
        std::cout << veggies << " ";
    std::cout << std::endl;
}

void ItalianHoagie::addCondiments()
{
    std::cout << "Adding the Condiments: ";
    for (auto &condiment : m_condimentsUsed)
        std::cout << condiment << " ";
    std::cout << std::endl;
}
