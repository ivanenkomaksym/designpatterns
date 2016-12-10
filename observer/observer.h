#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
public:
    virtual ~Observer() = default;

    virtual void update(double ibmPrice, double aaplPrice, double googPrice) = 0;
};

#endif // OBSERVER_H
