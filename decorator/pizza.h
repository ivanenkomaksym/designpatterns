#ifndef PIZZA_H
#define PIZZA_H

#include <string>

class Pizza
{
public:
    explicit Pizza() = default;
    virtual ~Pizza() = default;

    virtual std::string getDescription() = 0;
    virtual double getCost() = 0;
};

#endif // PIZZA_H
