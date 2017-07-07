#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include "prototype/clonefactory.h"
#include "prototype/sheep.h"

#include <iostream>

/*!
 * What is the Prototype Pattern
 *
 * Creating new objects (instances) by cloning (copying) other objects
 *
 * Allows for adding of any subclass instance of a known super class at run time
 *
 * When there are numerous potential classes that you want to only use if needed at run time
 *
 * Reduces the need for creating subclasses
 */

void prototypePattern()
{
    auto animalMaker = CloneFactory();

    Sheep sally;

    auto clonedSheep = animalMaker.getClone(sally);

    std::cout << "Sally pointer: " << &sally << std::endl;
    std::cout << "Clone pointer: " << clonedSheep << std::endl;

    delete clonedSheep;
}

#endif // PROTOTYPE_H
