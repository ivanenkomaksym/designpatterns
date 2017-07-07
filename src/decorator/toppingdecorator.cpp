#include "decorator/toppingdecorator.h"

ToppingDecorator::ToppingDecorator(Pizza &newPizza)
    : m_tempPizza(newPizza)
{
}

std::string ToppingDecorator::getDescription()
{
    return m_tempPizza.getDescription();
}

double ToppingDecorator::getCost()
{
    return m_tempPizza.getCost();
}
