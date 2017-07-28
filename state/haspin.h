#ifndef HASPIN_H
#define HASPIN_H

#include "state/atmstate.h"

class ATMMachine;

class HasPin : public ATMState
{
public:
    explicit HasPin(ATMMachine &newATMMachine);

private:
    virtual void insertCard() override;
    virtual void ejectCard() override;
    virtual void insertPin(size_t pinEntered) override;
    virtual void requestCash(size_t cashToWithdraw) override;
    virtual std::string toString() override;

    ATMMachine &m_atmMachine;
};

#endif // HASPIN_H
