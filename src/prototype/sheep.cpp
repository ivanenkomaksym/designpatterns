#include "prototype/sheep.h"

#include <iostream>

Sheep::Sheep()
{
    std::cout << "Sheep is made" << std::endl;
}

IAnimal *Sheep::makeCopy()
{
    return new Sheep(*this);
}
