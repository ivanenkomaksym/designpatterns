#ifndef SHEEP_H
#define SHEEP_H

#include "prototype/ianimal.h"

class Sheep : public IAnimal
{
public:
    explicit Sheep();

private:
    Sheep(const Sheep &) = default;
public:
    virtual IAnimal *makeCopy() override;
};

#endif // SHEEP_H
