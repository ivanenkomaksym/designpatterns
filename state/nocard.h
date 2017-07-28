#ifndef NOCARD_H
#define NOCARD_H

#include "state/atmstate.h"

class ATMMachine;

class NoCard : public ATMState
{
public:
    explicit NoCard(ATMMachine &newATMMachine);

private:
    virtual void insertCard() override;
    virtual void ejectCard() override;
    virtual void insertPin(size_t pinEntered) override;
    virtual void requestCash(size_t cashToWithdraw) override;
    virtual std::string toString() override;

    ATMMachine &m_atmMachine;
};

#endif // NOCARD_H
