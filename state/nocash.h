#ifndef NOCASH_H
#define NOCASH_H

#include "state/atmstate.h"

class ATMMachine;

class NoCash : public ATMState
{
public:
    explicit NoCash(ATMMachine &newATMMachine);

private:
    virtual void insertCard() override;
    virtual void ejectCard() override;
    virtual void insertPin(size_t pinEntered) override;
    virtual void requestCash(size_t cashToWithdraw) override;

    ATMMachine &m_atmMachine;
};

#endif // NOCASH_H
