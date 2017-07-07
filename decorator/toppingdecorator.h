#ifndef TOPPINGDECORATOR_H
#define TOPPINGDECORATOR_H

#include "decorator/pizza.h"

#include <string>

class Pizza;

class ToppingDecorator : public Pizza
{
public:
    ToppingDecorator(Pizza &newPizza);
    virtual ~ToppingDecorator() = default;

    virtual std::string getDescription() override;
    virtual double getCost() override;

protected:
    Pizza &m_tempPizza;
};

#endif // TOPPINGDECORATOR_H
