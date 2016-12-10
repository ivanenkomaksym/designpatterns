#ifndef STOCKGRABBER_H
#define STOCKGRABBER_H

#include "subject.h"

#include <vector>

class Observer;

class StockGrabber : public Subject
{
public:
    explicit StockGrabber() = default;
    virtual ~StockGrabber() = default;

    void setIBMPrice(double price);
    void setAAPLPrice(double price);
    void setGOOGPrice(double price);

    virtual void registerObserver(Observer &observer) override;
    virtual void unregisterObserver(Observer &observer) override;
    virtual void notifyObservers() override;

private:
    std::vector<Observer *> m_observers;
    double m_ibmPrice;
    double m_aaplPrice;
    double m_googPrice;
};

#endif // STOCKGRABBER_H
