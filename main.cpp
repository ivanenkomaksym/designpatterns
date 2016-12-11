#include <iostream>

#include "strategy/strategy.h"
#include "observer/observerpattern.h"
#include "factory/factory.h"
#include "abstractfactory/absfact_abstractfactory.h"

using namespace std;

int main(int argc, char *argv[])
{
    strategyPattern();
    observerPattern();
    factorypattern();
    abstractfactorypattern();
    return 0;
}
