#ifndef STRATEGY_H
#define STRATEGY_H

#include "strategy/animal.h"
#include "strategy/dog.h"
#include "strategy/bird.h"

void strategyPattern()
{
    std::unique_ptr<Animal> sparky = std::make_unique<Dog>();
    std::unique_ptr<Animal> tweety = std::make_unique<Dog>();

    std::cout << "Dog: " << sparky->tryToFly() << std::endl;
    std::cout << "Bird: " << sparky->tryToFly() << std::endl;

    sparky->setFlyingType(std::make_unique<ItFlys>());

    std::cout << "Dog: " << sparky->tryToFly() << std::endl;
}

#endif // STRATEGY_H
