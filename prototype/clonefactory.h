#ifndef CLONEFACTORY_H
#define CLONEFACTORY_H

class IAnimal;

class CloneFactory
{
public:
    explicit CloneFactory() = default;
    ~CloneFactory() = default;

    IAnimal *getClone(IAnimal &animalSample);
};

#endif // CLONEFACTORY_H
