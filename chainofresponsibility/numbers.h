#ifndef NUMBERS_H
#define NUMBERS_H

#include <string>

class Numbers
{
public:
    explicit Numbers(int number1, int number2, std::string calcWanted)
        : m_number1(number1)
        , m_number2(number2)
        , m_calculationWanted(calcWanted)
    {}
    ~Numbers() = default;

    int getNumber1() const { return m_number1; }
    int getNumber2() const { return m_number2; }
    const std::string &getCalcWanted() const { return m_calculationWanted; }

private:
    int m_number1;
    int m_number2;

    std::string m_calculationWanted;
};

#endif // NUMBERS_H
