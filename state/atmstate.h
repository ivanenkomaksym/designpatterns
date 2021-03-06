#ifndef ATMSTATE_H
#define ATMSTATE_H

#include <iostream>
#include <string>

class ATMState
{
public:
    virtual ~ATMState() = default;

    virtual void insertCard() = 0;
    virtual void ejectCard() = 0;
    virtual void insertPin(size_t pinEntered) = 0;
    virtual void requestCash(size_t cashToWithdraw) = 0;
    virtual std::string toString() = 0;
};

#endif // ATMSTATE_H
