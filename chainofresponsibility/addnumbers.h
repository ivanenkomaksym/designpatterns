#ifndef ADDNUMBERS_H
#define ADDNUMBERS_H

#include "chainofresponsibility/chain.h"

class AddNumbers : public Chain
{
public:
    explicit AddNumbers() = default;
    virtual ~AddNumbers() = default;

private:
    virtual void setNextChain(Chain &nextChain) override;
    virtual void calculate(Numbers &request) override;

    Chain *m_nextInChain = nullptr;
};

#endif // ADDNUMBERS_H
