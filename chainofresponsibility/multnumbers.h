#ifndef MULTNUMBERS_H
#define MULTNUMBERS_H

#include "chainofresponsibility/chain.h"

class MultNumbers : public Chain
{
public:
    explicit MultNumbers() = default;
    virtual ~MultNumbers() = default;

private:
    virtual void setNextChain(Chain &nextChain) override;
    virtual void calculate(Numbers &request) override;

    Chain *m_nextInChain = nullptr;
};

#endif // MULTNUMBERS_H
