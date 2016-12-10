#include "observer/stockobserver.h"

#include "observer/subject.h"

#include <iostream>

int StockObserver::s_observerIDTracker = 0;

StockObserver::StockObserver(Subject &stockGrabber)
    : m_stockGrabber(stockGrabber)
    , m_observerID(++s_observerIDTracker)
{
    std::cout << "New Observer " << m_observerID << std::endl;
    m_stockGrabber.registerObserver(*this);
}

StockObserver::~StockObserver()
{
    m_stockGrabber.unregisterObserver(*this);
}

void StockObserver::update(double ibmPrice, double aaplPrice, double googPrice)
{
    m_ibmPrice = ibmPrice;
    m_aaplPrice = aaplPrice;
    m_googPrice = googPrice;

    printThePrices();
}

void StockObserver::printThePrices()
{
    std::cout << "Observer" << m_observerID << "\nIBM: " << m_ibmPrice << "\nAAPL: "
              << m_aaplPrice << "\nGOOG: " << m_googPrice << "\n" << std::endl;
}
