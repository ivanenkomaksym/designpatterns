#ifndef DOG_H
#define DOG_H

#include "strategy/animal.h"

class Dog : public Animal
{
public:
    explicit Dog();
    virtual ~Dog() = default;

    void digHole() const;
};

#endif // DOG_H
