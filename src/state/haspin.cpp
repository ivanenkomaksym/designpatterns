#include "state/haspin.h"

#include "state/atmmachine.h"

#include <iostream>

HasPin::HasPin(ATMMachine &newATMMachine)
    : m_atmMachine(newATMMachine)
{
}

void HasPin::insertCard()
{
    std::cout << "You can't enter more than one card" << std::endl;
}

void HasPin::ejectCard()
{
    std::cout << "Card Ejected" << std::endl;
    m_atmMachine.setATMState(m_atmMachine.getNoCardState());
}

void HasPin::insertPin(size_t pinEntered)
{
    std::cout << "Already entered PIN" << std::endl;
}

void HasPin::requestCash(size_t cashToWithdraw)
{
    if (cashToWithdraw > m_atmMachine.getCashInMachine())
    {
        std::cout << "Don't Have that Cash" << std::endl;
        std::cout << "Card Ejected" << std::endl;
        m_atmMachine.setATMState(m_atmMachine.getNoCardState());
    }
    else
    {
        std::cout << cashToWithdraw << " is provided by the machine" << std::endl;
        m_atmMachine.setCashInMachine(m_atmMachine.getCashInMachine() - cashToWithdraw);

        std::cout << "Card Ejected" << std::endl;
        m_atmMachine.setATMState(m_atmMachine.getNoCardState());

        if (m_atmMachine.getCashInMachine() <= 0)
        {
            m_atmMachine.setATMState(m_atmMachine.getNoCashState());
        }
    }
}

std::string HasPin::toString()
{
    return "Has Pin";
}
