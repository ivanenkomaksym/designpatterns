#include "chainofresponsibility/dividenumbers.h"

#include "chainofresponsibility/numbers.h"

#include <iostream>

void DivideNumbers::setNextChain(Chain &nextChain)
{
    m_nextInChain = &nextChain;
}

void DivideNumbers::calculate(Numbers &request)
{
    if (request.getCalcWanted() == "div")
    {
        std::cout << request.getNumber1() << " / " << request.getNumber2() <<
                     " = " << request.getNumber1() / request.getNumber2() << std::endl;
    }
    else
    {
        std::cout << "Only works for add, sub, mult, ad div" << std::endl;
    }
}
