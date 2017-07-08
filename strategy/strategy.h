#ifndef STRATEGY_H
#define STRATEGY_H

#include "strategy/animal.h"
#include "strategy/dog.h"
#include "strategy/bird.h"
#include "strategy/flys.h"

#include <iostream>
#include <memory>

/*!
 * When to Use the Strategy Pattern
 *
 * When you want to define a class that will have one behavior that is
 * similar to other behaviors in a list
 *
 * I want the class object to be able to choose from
 *      - Not Flying
 *      - Fly with Wings
 *      - Fly Super Fast
 *
 * When you need to use one of several behaviors dynamicallyd
 */

void strategyPattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "======================Strategy Pattern======================" << std::endl;
    std::unique_ptr<Animal> sparky = std::make_unique<Dog>();
    std::unique_ptr<Animal> tweety = std::make_unique<Bird>();

    std::cout << "Dog: " << sparky->tryToFly() << std::endl;
    std::cout << "Bird: " << sparky->tryToFly() << std::endl;

    sparky->setFlyingAbility(std::make_unique<ItFlys>());

    std::cout << "Dog: " << sparky->tryToFly() << std::endl;
    std::cout << "======================Strategy Pattern======================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // STRATEGY_H
