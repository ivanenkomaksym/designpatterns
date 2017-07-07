#include "decorator/tomatosauce.h"

#include <iostream>

TomatoSauce::TomatoSauce(Pizza &newPizza)
    : ToppingDecorator(newPizza)
{
    std::cout << "Adding Sauce" << std::endl;
}

std::string TomatoSauce::getDescription()
{
    return m_tempPizza.getDescription() + ", Tomato Sauce";
}

double TomatoSauce::getCost()
{
    return m_tempPizza.getCost() + 0.35;
}
