#include "decorator/mozzarella.h"

#include <iostream>

Mozzarella::Mozzarella(Pizza &newPizza)
    : ToppingDecorator(newPizza)
{
    std::cout << "Adding Dough" << std::endl << "Adding Mozzarella" << std::endl;
}

std::string Mozzarella::getDescription()
{
    return m_tempPizza.getDescription() + ", Mozzarella";
}

double Mozzarella::getCost()
{
    return m_tempPizza.getCost() + 0.5;
}
