#include <iostream>

#include "strategy/strategy.h"
#include "observer/observerpattern.h"
#include "factory/factory.h"
#include "abstractfactory/absfact_abstractfactory.h"
#include "singleton/singletonpattern.h"
#include "builder/builder.h"
#include "prototype/prototype.h"
#include "decorator/decorator.h"
#include "adapter/adapter.h"
#include "bridge/bridge.h"
#include "templatemethod/templatemethod.h"
#include "iterator/iterator.h"
#include "facade/facade.h"

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
    adapterPattern();
    bridgePattern();
    templateMethodPattern();
    iteratorPattern();
    facadePattern();
    return 0;
}
