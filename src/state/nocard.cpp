#include "state/nocard.h"

#include "state/atmmachine.h"

#include <iostream>

NoCard::NoCard(ATMMachine &newATMMachine)
    : m_atmMachine(newATMMachine)
{
}

void NoCard::insertCard()
{
    std::cout << "Please enter a PIN" << std::endl;
    m_atmMachine.setATMState(m_atmMachine.getYesCardState());
}

void NoCard::ejectCard()
{
    std::cout << "Enter a card first" << std::endl;
}

void NoCard::insertPin(size_t pinEntered)
{
    std::cout << "Enter a card first" << std::endl;
}

void NoCard::requestCash(size_t cashToWithdraw)
{
    std::cout << "Enter a card first" << std::endl;
}
