#include "state/nocash.h"

#include "state/atmmachine.h"

#include <iostream>

NoCash::NoCash(ATMMachine &newATMMachine)
    : m_atmMachine(newATMMachine)
{
}

void NoCash::insertCard()
{
    std::cout << "We Don't Have Money" << std::endl;
}

void NoCash::ejectCard()
{
    std::cout << "We Don't Have Money. You didn't enter a card" << std::endl;
}

void NoCash::insertPin(size_t pinEntered)
{
    std::cout << "We Don't Have Money" << std::endl;
}

void NoCash::requestCash(size_t cashToWithdraw)
{
    std::cout << "We Don't Have Money" << std::endl;
}
