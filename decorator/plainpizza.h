#ifndef PLAINPIZZA_H
#define PLAINPIZZA_H

#include "decorator/pizza.h"

#include <string>

class PlainPizza : public Pizza
{
public:
    explicit PlainPizza() = default;
    virtual ~PlainPizza() = default;

    virtual std::string getDescription() override;
    double getCost() override;
};

#endif // PLAINPIZZA_H
