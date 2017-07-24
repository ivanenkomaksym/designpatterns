#ifndef FUNDSCHECK_H
#define FUNDSCHECK_H

#include <iostream>

class FundsCheck
{
public:
    explicit FundsCheck() = default;
    ~FundsCheck() = default;

    double getCashInAccount() { return m_cashInAccount; }
    void decreaseCashInAccount(double cashWithDrawn) { m_cashInAccount -= cashWithDrawn; }
    void increaseCashInAccount(double cashDeposit) { m_cashInAccount += cashDeposit; }

    bool haveEnoughMoney(double cashToWithDrawal)
    {
        if (cashToWithDrawal > getCashInAccount())
        {
            std::cout << "Error: You don't have enough money." << std::endl <<
                         "Current Balance: " << getCashInAccount() << std::endl;
            return false;
        }
        else
        {
            decreaseCashInAccount(cashToWithDrawal);
            std::cout << "Withdrawal Complete." << std::endl <<
                         "Current Balance: " << getCashInAccount() << std::endl;
            return true;
        }
    }

    void makeDeposit(double cashToDeposit)
    {
        increaseCashInAccount(cashToDeposit);
        std::cout << "Deposit Complete." << std::endl <<
                     "Current Balance: " << getCashInAccount() << std::endl;

    }

private:
    double m_cashInAccount = 1000.0;
};

#endif // FUNDSCHECK_H
