#include "state/atmmachine.h"

#include "state/hascard.h"
#include "state/haspin.h"
#include "state/nocard.h"
#include "state/nocash.h"

ATMMachine::ATMMachine()
    : m_hasCard(*(new HasCard(*this)))
    , m_noCard(*(new NoCard(*this)))
    , m_hasCorrectPin(*(new HasPin(*this)))
    , m_atmOutOfMoney(*(new NoCash(*this)))
    , m_atmState(&m_noCard)
{
    if (m_cashInMachine == 0)
        m_atmState = &m_atmOutOfMoney;
}

void ATMMachine::setATMState(ATMState &newATMState)
{
    m_atmState = &newATMState;
}

void ATMMachine::setCashInMachine(size_t newCashInMachine)
{
    m_cashInMachine = newCashInMachine;
}

void ATMMachine::insertCard()
{
    m_atmState->insertCard();
}

void ATMMachine::ejectCard()
{
    m_atmState->ejectCard();
}

void ATMMachine::requestCash(size_t cashToWithdraw)
{
    m_atmState->requestCash(cashToWithdraw);
}

void ATMMachine::insertPin(size_t pinEntered)
{
    m_atmState->insertPin(pinEntered);
}

ATMState &ATMMachine::getYesCardState()
{
    return m_hasCard;
}

ATMState &ATMMachine::getNoCardState()
{
    return m_noCard;
}

ATMState &ATMMachine::getHasPin()
{
    return m_hasCorrectPin;
}

ATMState &ATMMachine::getNoCashState()
{
    return m_atmOutOfMoney;
}

void ATMMachine::setCorrectPinEntered(bool correct)
{
    m_correctPinEntered = correct;
}

size_t ATMMachine::getCashInMachine() const
{
    return m_cashInMachine;
}
