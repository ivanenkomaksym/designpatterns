#ifndef MOZZARELLA_H
#define MOZZARELLA_H

#include "decorator/toppingdecorator.h"

class Mozzarella : public ToppingDecorator
{
public:
    explicit Mozzarella(Pizza &newPizza);
    virtual ~Mozzarella() = default;

    std::string getDescription();
    double getCost();
};

#endif // MOZZARELLA_H
