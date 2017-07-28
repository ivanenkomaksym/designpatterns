#include "chainofresponsibility/addnumbers.h"

#include "chainofresponsibility/numbers.h"

#include <iostream>

void AddNumbers::setNextChain(Chain &nextChain)
{
    m_nextInChain = &nextChain;
}

void AddNumbers::calculate(Numbers &request)
{
    if (request.getCalcWanted() == "add")
    {
        std::cout << request.getNumber1() << " + " << request.getNumber2() <<
                     " = " << request.getNumber1() + request.getNumber2() << std::endl;
    }
    else
    {
        m_nextInChain->calculate(request);
    }
}
