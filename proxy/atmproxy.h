#ifndef ATMPROXY_H
#define ATMPROXY_H

#include "proxy/getatmdata.h"

class ATMProxy : public GetATMData
{
public:
    virtual ATMState &getATMData() const override;
    virtual size_t getCashInMachine() const override;
};

#endif // ATMPROXY_H
