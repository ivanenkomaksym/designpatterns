#ifndef DECORATOR_H
#define DECORATOR_H

#include "decorator/plainpizza.h"
#include "decorator/tomatosauce.h"
#include "decorator/mozzarella.h"

#include <iostream>
#include <memory>

/*!
 * What is the Decorator Pattern
 *
 * Allows you to modify an object dynamically
 *
 * You would use it when you want the capabilities of inheritance with
 * subclasses, but you need to add functionality at run time
 *
 * It is more flexible than inheritance
 *
 * Simplifies code because you add functionality using many simple classes
 *
 * Rather than rewrite old code you can extend with new code
 */

void decoratorPattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "=======================Decorator Pattern====================" << std::endl;
    auto plainPizza = std::make_unique<PlainPizza>();
    auto mozzarella = std::make_unique<Mozzarella>(*plainPizza);
    auto basicPizza = std::make_unique<TomatoSauce>(*mozzarella);

    std::cout << "Ingridients: " << basicPizza->getDescription() << std::endl;
    std::cout << "Price: " << basicPizza->getCost() << std::endl;
    std::cout << "=======================Decorator Pattern====================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // DECORATOR_H
