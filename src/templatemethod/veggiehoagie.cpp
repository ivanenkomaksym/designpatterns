#include "templatemethod/veggiehoagie.h"

#include <iostream>

void VeggieHoagie::addMeat()
{
}

void VeggieHoagie::addCheese()
{
}

void VeggieHoagie::addVegetables()
{
    std::cout << "Adding the Veggies: ";
    for (auto &veggies : m_veggiesUsed)
        std::cout << veggies << " ";
    std::cout << std::endl;
}

void VeggieHoagie::addCondiments()
{
    std::cout << "Adding the Condiments: ";
    for (auto &condiment : m_condimentsUsed)
        std::cout << condiment << " ";
    std::cout << std::endl;
}
