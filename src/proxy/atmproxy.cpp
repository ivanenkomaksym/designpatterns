#include "proxy/atmproxy.h"

#include "state/atmmachine.h"

ATMState &ATMProxy::getATMData() const
{
    auto realATMMachine = ATMMachine();
    return realATMMachine.getATMData();
}

size_t ATMProxy::getCashInMachine() const
{
    auto realATMMachine = ATMMachine();
    return realATMMachine.getCashInMachine();
}
