#ifndef ATMMACHINE_H
#define ATMMACHINE_H

#include "state/atmstate.h"
#include "proxy/getatmdata.h"

class ATMMachine : public GetATMData
{
public:
    explicit ATMMachine();
    virtual ~ATMMachine() = default;

    void setATMState(ATMState &newATMState);
    void setCashInMachine(size_t newCashInMachine);

    void insertCard();
    void ejectCard();
    void requestCash(size_t cashToWithdraw);
    void insertPin(size_t pinEntered);

    ATMState &getYesCardState();
    ATMState &getNoCardState();
    ATMState &getHasPin();
    ATMState &getNoCashState();

    void setCorrectPinEntered(bool correct);

    // GetATMData interface
    virtual size_t getCashInMachine() const override;
    virtual ATMState &getATMData() const override;

private:
    ATMState &m_hasCard;
    ATMState &m_noCard;
    ATMState &m_hasCorrectPin;
    ATMState &m_atmOutOfMoney;

    ATMState *m_atmState;
    size_t m_cashInMachine = 2000;
    bool m_correctPinEntered = false;
};

#endif // ATMMACHINE_H
