#ifndef SUBTRACTNUMBERS_H
#define SUBTRACTNUMBERS_H

#include "chainofresponsibility/chain.h"

class SubtractNumbers : public Chain
{
public:
    explicit SubtractNumbers() = default;
    virtual ~SubtractNumbers() = default;

private:
    virtual void setNextChain(Chain &nextChain) override;
    virtual void calculate(Numbers &request) override;

    Chain *m_nextInChain = nullptr;
};

#endif // SUBTRACTNUMBERS_H
