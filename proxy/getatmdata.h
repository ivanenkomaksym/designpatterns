#ifndef GETATMDATA_H
#define GETATMDATA_H

#include <iostream>

class ATMState;

class GetATMData
{
public:
    virtual ~GetATMData() = default;

    virtual ATMState &getATMData() const = 0;
    virtual size_t getCashInMachine() const = 0;
};

#endif // GETATMDATA_H
