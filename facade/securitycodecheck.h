#ifndef SECURITYCODECHECK_H
#define SECURITYCODECHECK_H

class SecurityCodeCheck
{
public:
    explicit SecurityCodeCheck() = default;
    ~SecurityCodeCheck() = default;

    int getSecurityCode() const { return m_securityCode; }
    bool isCodeCorrect(int secCodeToCheck) { return secCodeToCheck == m_securityCode; }

private:
    int m_securityCode = 1234;
};

#endif // SECURITYCODECHECK_H
