#ifndef DIVIDENUMBERS_H
#define DIVIDENUMBERS_H

#include "chainofresponsibility/chain.h"

class DivideNumbers : public Chain
{
public:
    explicit DivideNumbers() = default;
    virtual ~DivideNumbers() = default;

private:
    virtual void setNextChain(Chain &nextChain) override;
    virtual void calculate(Numbers &request) override;

    Chain *m_nextInChain = nullptr;
};

#endif // DIVIDENUMBERS_H
