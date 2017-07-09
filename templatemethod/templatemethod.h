#ifndef TEMPLATEMETHOD_H
#define TEMPLATEMETHOD_H

#include "templatemethod/italianhoagie.h"
#include "templatemethod/veggiehoagie.h"

#include <iostream>
#include <memory>

/*!
 * What is the Template Method Design Pattern
 *
 * Used to create a group of subclasses that have to execute a similar
 * group of methods
 *
 * You create an abstract class that contains a method called the Template Method
 *
 * The Template Method contains a series of method calls that every subclass
 * object will call
 *
 * The subclass objects can override some of the method calls
 */

void templateMethodPattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "===================Template Method Pattern==================" << std::endl;

    auto cust12Hoagie = std::make_unique<ItalianHoagie>();
    cust12Hoagie->makeSandwich();
    std::cout << std::endl;
    auto cust13Hoagie = std::make_unique<VeggieHoagie>();
    cust13Hoagie->makeSandwich();

    std::cout << "===================Template Method Pattern==================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // TEMPLATEMETHOD_H
