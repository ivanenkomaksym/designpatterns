#include "chainofresponsibility/subtractnumbers.h"

#include "chainofresponsibility/numbers.h"

#include <iostream>

void SubtractNumbers::setNextChain(Chain &nextChain)
{
    m_nextInChain = &nextChain;
}

void SubtractNumbers::calculate(Numbers &request)
{
    if (request.getCalcWanted() == "sub")
    {
        std::cout << request.getNumber1() << " - " << request.getNumber2() <<
                     " = " << request.getNumber1() - request.getNumber2() << std::endl;
    }
    else
    {
        m_nextInChain->calculate(request);
    }
}
