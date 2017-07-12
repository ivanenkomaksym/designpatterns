#include "state/hascard.h"

#include "state/atmmachine.h"

#include <iostream>

HasCard::HasCard(ATMMachine &newATMMachine)
    : m_atmMachine(newATMMachine)
{
}

void HasCard::insertCard()
{
    std::cout << "You can't enter more than one card" << std::endl;
}

void HasCard::ejectCard()
{
    std::cout << "Card Ejected" << std::endl;
    m_atmMachine.setATMState(m_atmMachine.getNoCardState());
}

void HasCard::insertPin(size_t pinEntered)
{
    if (pinEntered == 1234)
    {
        std::cout << "Correct PIN" << std::endl;
        m_atmMachine.setCorrectPinEntered(true);
        m_atmMachine.setATMState(m_atmMachine.getHasPin());
    }
    else
    {
        std::cout << "Wrong PIN" << std::endl;
        m_atmMachine.setCorrectPinEntered(false);
        std::cout << "Card Ejected" << std::endl;
        m_atmMachine.setATMState(m_atmMachine.getNoCardState());
    }
}

void HasCard::requestCash(size_t cashToWithdraw)
{
    std::cout << "Enter PIN first" << std::endl;
}
