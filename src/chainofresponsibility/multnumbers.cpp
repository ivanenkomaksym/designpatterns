#include "chainofresponsibility/multnumbers.h"

#include "chainofresponsibility/numbers.h"

#include <iostream>

void MultNumbers::setNextChain(Chain &nextChain)
{
    m_nextInChain = &nextChain;
}

void MultNumbers::calculate(Numbers &request)
{
    if (request.getCalcWanted() == "mult")
    {
        std::cout << request.getNumber1() << " * " << request.getNumber2() <<
                     " = " << request.getNumber1() * request.getNumber2() << std::endl;
    }
    else
    {
        m_nextInChain->calculate(request);
    }
}
