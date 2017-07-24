#ifndef BANKACCOUNTFACADE_H
#define BANKACCOUNTFACADE_H

#include "facade/accountnumbercheck.h"
#include "facade/fundscheck.h"
#include "facade/securitycodecheck.h"
#include "facade/welcometobank.h"

class BankAccountFacade
{
public:
    explicit BankAccountFacade(int newAccNum, int newSecCode)
        : m_accountNumber(newAccNum)
        , m_securityCode(newSecCode)
    {}
    ~BankAccountFacade() = default;

    int getAccountNumber() { return m_accountNumber; }
    int getSecurityCode() { return m_securityCode; }

    void withdrawCash(double cashToGet)
    {
        if (m_accChecker.accountActive(getAccountNumber()) &&
            m_codeChecker.isCodeCorrect(m_securityCode) &&
            m_fundChecker.haveEnoughMoney(cashToGet))
        {
            std::cout << "Transaction Complete" << std::endl;
        }
        else
        {
            std::cout << "Transaction Failed" << std::endl;
        }
    }

    void depositCash(double cashToDeposit)
    {
        if (m_accChecker.accountActive(getAccountNumber()) &&
            m_codeChecker.isCodeCorrect(m_securityCode))
        {
            m_fundChecker.makeDeposit(cashToDeposit);
            std::cout << "Transaction Complete" << std::endl;
        }
        else
        {
            std::cout << "Transaction Failed" << std::endl;
        }
    }

private:
    int                 m_accountNumber;
    int                 m_securityCode;
    AccountNumberCheck  m_accChecker;
    SecurityCodeCheck   m_codeChecker;
    FundsCheck          m_fundChecker;
    WelcomeToBank       m_bankWelcome;
};

#endif // BANKACCOUNTFACADE_H
