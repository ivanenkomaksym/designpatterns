#ifndef STOCKOBSERVER_H
#define STOCKOBSERVER_H

#include "observer.h"

class Subject;

class StockObserver : public Observer
{
public:
    explicit StockObserver(Subject &stockGrabber);
    virtual ~StockObserver();


private:
    virtual void update(double ibmPrice, double aaplPrice, double googPrice) override;

    void printThePrices();

    static int s_observerIDTracker;
    int m_observerID;
    Subject &m_stockGrabber;

    double m_ibmPrice;
    double m_aaplPrice;
    double m_googPrice;
};

#endif // STOCKOBSERVER_H
