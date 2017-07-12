#ifndef HASCARD_H
#define HASCARD_H

#include "state/atmstate.h"

class ATMMachine;

class HasCard : public ATMState
{
public:
    explicit HasCard(ATMMachine &newATMMachine);

private:
    virtual void insertCard() override;
    virtual void ejectCard() override;
    virtual void insertPin(size_t pinEntered) override;
    virtual void requestCash(size_t cashToWithdraw) override;

    ATMMachine &m_atmMachine;
};

#endif // HASCARD_H
