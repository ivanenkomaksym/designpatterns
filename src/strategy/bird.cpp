#include "strategy/bird.h"
#include "strategy/flys.h"

Bird::Bird()
    : Animal(std::make_unique<ItFlys>())
{
}
