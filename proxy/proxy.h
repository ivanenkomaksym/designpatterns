#ifndef PROXY_H
#define PROXY_H

#include "proxy/atmproxy.h"
#include "state/atmmachine.h"

#include <memory>

/*!
 * What is the Proxy Design Pattern
 *
 * Provide a clas which will limit access to another class
 *
 * You may do this for security reasons, because an Object is intensive
 * to create, or is accessed from a remote location.
 *
 */

void proxyPattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "========================Proxy Pattern=======================" << std::endl;

    std::unique_ptr<GetATMData> realATMMachine = std::make_unique<ATMMachine>();
    auto atmProxy = ATMProxy();
    std::cout << "Current ATM State: " << atmProxy.getATMData().toString() << std::endl;
    std::cout << "Cash in ATM Machine: " << atmProxy.getCashInMachine() << std::endl;
    //atmProxy.setCashInMachine();          INVALID
    //realATMMachine->setCashInMachine();   INVALID

    std::cout << "========================Proxy Pattern=======================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // PROXY_H
