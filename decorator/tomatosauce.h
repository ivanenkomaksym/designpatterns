#ifndef TOMATOSAUCE_H
#define TOMATOSAUCE_H

#include "decorator/toppingdecorator.h"

class TomatoSauce : public ToppingDecorator
{
public:
    explicit TomatoSauce(Pizza &newPizza);
    virtual ~TomatoSauce() = default;

    virtual std::string getDescription() override;
    virtual double getCost() override;
};

#endif // TOMATOSAUCE_H
