#ifndef CHAINOFRESPONSIBILITY_H
#define CHAINOFRESPONSIBILITY_H

#include "chainofresponsibility/addnumbers.h"
#include "chainofresponsibility/dividenumbers.h"
#include "chainofresponsibility/multnumbers.h"
#include "chainofresponsibility/subtractnumbers.h"
#include "chainofresponsibility/numbers.h"

#include <memory>

/*!
 * What is the Chain of Responsibility Design Pattern
 *
 * This pattern sends data to an object and if that object can't use it, it
 * sends it to any number of other objects that may be able to use it
 *
 * Create 4 objects that can either add, subtract, multiply, or divide
 *
 * Send 2 numbers and a command and allow these 4 objects to
 * decide which can handle the requested calculation
 */

void chainOfResponsibilityPattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "================Chain of Responsibility Pattern=============" << std::endl;

    std::unique_ptr<Chain> chainCalc1 = std::make_unique<AddNumbers>();
    std::unique_ptr<Chain> chainCalc2 = std::make_unique<SubtractNumbers>();
    std::unique_ptr<Chain> chainCalc3 = std::make_unique<MultNumbers>();
    std::unique_ptr<Chain> chainCalc4 = std::make_unique<DivideNumbers>();

    chainCalc1->setNextChain(*chainCalc2);
    chainCalc2->setNextChain(*chainCalc3);
    chainCalc3->setNextChain(*chainCalc4);

    Numbers request(4, 2, "div");
    chainCalc1->calculate(request);

    std::cout << "================Chain of Responsibility Pattern=============" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // CHAINOFRESPONSIBILITY_H
