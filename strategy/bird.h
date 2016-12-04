#ifndef BIRD_H
#define BIRD_H

#include "strategy/animal.h"

class Bird : public Animal
{
public:
    explicit Bird();
    virtual ~Bird() = default;
};

#endif // BIRD_H
