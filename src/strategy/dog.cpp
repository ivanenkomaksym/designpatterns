#include "strategy/dog.h"

#include "strategy/flys.h"

#include <iostream>

Dog::Dog()
    : Animal(std::make_unique<CantFly>())
{
}

void Dog::digHole() const
{
std::cout << "Dug a hole" << std::endl;
}
