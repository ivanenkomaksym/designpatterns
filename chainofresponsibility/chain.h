#ifndef CHAIN_H
#define CHAIN_H

class Numbers;

class Chain
{
public:
    virtual ~Chain() = default;

    virtual void setNextChain(Chain &nextChain) = 0;
    virtual void calculate(Numbers &request) = 0;
};

#endif // CHAIN_H
