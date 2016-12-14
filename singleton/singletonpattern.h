#ifndef SINGLETONPATTERN_H
#define SINGLETONPATTERN_H

#include "singleton/singleton.h"

#include <iostream>
#include <thread>
#include <mutex>

/*!
 * What is the Singleton Pattern
 *
 * It is used when you want to eliminate the option of instantiating
 * more that one object.
 * Class holds all the potential Scrabble letters and spits out new ones
 * upon request
 * Each player will share the same potential list
 * Each player has their own set of letters
 */

void printList(LettersVector &list)
{
    for (auto item : list)
    {
        std::cout << item;
    }
    std::cout << std::endl;
}

std::mutex mu2;

void run()
{
    auto newInstance = Singleton::getInstance();

    std::lock_guard<std::mutex> guard(mu2);

    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl; // thread id
    std::cout << "Instance ID: " << newInstance << std::endl;
    std::cout << "List: ";
    printList(newInstance->getLettersList());

    auto playerTiles = newInstance->getTiles(7);

    std::cout << "Player's list : ";
    printList(playerTiles);
    std::cout << "List: ";
    printList(newInstance->getLettersList());
    std::cout << std::endl;
}

void singletonpattern()
{
    std::thread t1(run);
    std::thread t2(run);

    t1.join();
    t2.join();
}

#endif // SINGLETONPATTERN_H
