#ifndef IANIMAL_H
#define IANIMAL_H

class IAnimal
{
public:
    virtual ~IAnimal() = default;

    virtual IAnimal *makeCopy() = 0;
};

#endif // IANIMAL_H
