#include <iostream>

#include "strategy/strategy.h"
#include "observer/observerpattern.h"
#include "factory/factory.h"
#include "abstractfactory/absfact_abstractfactory.h"
#include "singleton/singletonpattern.h"
#include "builder/builder.h"
#include "prototype/prototype.h"
#include "decorator/decorator.h"

using namespace std;

int main(int argc, char *argv[])
{
    strategyPattern();
    observerPattern();
    factorypattern();
    abstractfactorypattern();
    singletonpattern();
    builderPattern();
    prototypePattern();
    decoratorPattern();
    return 0;
}
