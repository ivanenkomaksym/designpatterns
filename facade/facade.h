#ifndef FACADE_H
#define FACADE_H

#include "facade/bankaccountfacade.h"

#include <iostream>

/*!
 * What is the Facade Design Pattern
 *
 * When you create a simplified interface that performs many other
 * actions behind the scenes
 *
 * Can I Withdrawal $50 From the Bank?
 *  - Check if checking account is valid
 *  - Check if security code is valid
 *  - Check if funds are available
 *  - Make changes accordingly
 */

void facadePattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "========================Facade Pattern======================" << std::endl;
    BankAccountFacade accessingBank(12345678, 1234);
    accessingBank.withdrawCash(50.00);
    accessingBank.withdrawCash(900.00);
    accessingBank.depositCash(150.00);
    std::cout << "========================Facade Pattern======================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // FACADE_H
