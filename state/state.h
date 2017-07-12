#ifndef STATE_H
#define STATE_H

#include "state/atmmachine.h"

#include "state/atmstate.h"

#include <iostream>

/*!
 * What is the State Pattern
 *
 * Allows an object to alter its behavior when its internal state
 * changes. The object will appear to change its class.
 *
 * Context (Accout): Maintains an instance of a ConcreteState
 * subclass that defined the current state
 *
 * State: Defines an interface for encapsulating the behavior
 * associated with a particular state of the Context
 *
 * Concrete State: Each subclass implements a behavior associated
 * with a state of Context
 */

void statePattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "=========================State Pattern======================" << std::endl;

    auto atmMachine = ATMMachine();
    atmMachine.insertCard();
    atmMachine.ejectCard();
    atmMachine.insertCard();
    atmMachine.insertPin(1234);
    atmMachine.requestCash(2000);
    atmMachine.insertCard();
    atmMachine.insertPin(1234);

    std::cout << "=========================State Pattern======================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // STATE_H
