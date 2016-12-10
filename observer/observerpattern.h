#ifndef OBSERVERPATTERN_H
#define OBSERVERPATTERN_H

#include "stockgrabber.h"
#include "stockobserver.h"

/*!
 * When to Use the Observer Pattern
 *
 * When you need many other objects to receive an update when
 * another object changes
 *
 * Stock market with thousands of stocks needs to send updates to
 * objects representing individual stocks
 *
 * The Subject (publisher) sends many stocks to the Observers
 *
 * The Observers (subsribers) takes the ones they want and use them
 */


void observerPattern()
{
    auto stockGrabber = StockGrabber();

    auto observer1 = StockObserver(stockGrabber);

    stockGrabber.setIBMPrice(197.00);
    stockGrabber.setAAPLPrice(677.60);
    stockGrabber.setGOOGPrice(676.40);

    auto observer2 = StockObserver(stockGrabber);

    stockGrabber.setIBMPrice(197.00);
    stockGrabber.setAAPLPrice(677.60);
    stockGrabber.setGOOGPrice(676.40);

    stockGrabber.unregisterObserver(observer2);

    stockGrabber.setIBMPrice(197.00);
    stockGrabber.setAAPLPrice(677.60);
    stockGrabber.setGOOGPrice(676.40);
}

#endif // OBSERVERPATTERN_H
