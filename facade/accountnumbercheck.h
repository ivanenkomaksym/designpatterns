#ifndef ACCOUNTNUMBERCHECK_H
#define ACCOUNTNUMBERCHECK_H

class AccountNumberCheck
{
public:
    explicit AccountNumberCheck() = default;
    ~AccountNumberCheck() = default;

    int getAccountNumber() const { return m_accountNumber; }
    bool accountActive(int accNumToCheck) { return accNumToCheck == m_accountNumber; }

private:
    int m_accountNumber = 12345678;
};

#endif // ACCOUNTNUMBERCHECK_H
