#include "prototype/clonefactory.h"

#include "prototype/ianimal.h"

IAnimal *CloneFactory::getClone(IAnimal &animalSample)
{
    return animalSample.makeCopy();
}
