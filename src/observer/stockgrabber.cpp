#include "observer/stockgrabber.h"

#include "observer/observer.h"

#include <algorithm>
#include <iostream>

void StockGrabber::registerObserver(Observer &observer)
{
    m_observers.push_back(&observer);
}

void StockGrabber::unregisterObserver(Observer &observer)
{
    m_observers.erase(std::remove(m_observers.begin(), m_observers.end(), &observer), m_observers.end());

    std::cout << "Observer removed" << std::endl;
}

void StockGrabber::notifyObservers()
{
    for (auto observer: m_observers)
        observer->update(m_ibmPrice, m_aaplPrice, m_googPrice);
}

void StockGrabber::setIBMPrice(double price)
{
    m_ibmPrice = price;
    notifyObservers();
}

void StockGrabber::setAAPLPrice(double price)
{
    m_aaplPrice = price;
    notifyObservers();
}

void StockGrabber::setGOOGPrice(double price)
{
    m_googPrice = price;
    notifyObservers();
}
