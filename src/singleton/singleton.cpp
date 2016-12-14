#include "singleton/singleton.h"

#include <algorithm>
#include <thread>
#include <chrono>
#include <iostream>

Singleton *Singleton::m_firstInstance = nullptr;
bool Singleton::m_firstThread = true;
std::mutex Singleton::m_mutex;

LettersVector Singleton::m_scrabbleLetters = {"a", "a", "a", "a", "a", "a", "a", "a", "a",
                        "b", "b", "c", "c", "d", "d", "d", "d", "e", "e", "e", "e", "e",
                        "e", "e", "e", "e", "e", "e", "e", "f", "f", "g", "g", "g", "h",
                        "h", "i", "i", "i", "i", "i", "i", "i", "i", "i", "j", "k", "l",
                        "l", "l", "l", "m", "m", "n", "n", "n", "n", "n", "n", "o", "o",
                        "o", "o", "o", "o", "o", "o", "p", "p", "q", "r", "r", "r", "r",
                        "r", "r", "s", "s", "s", "s", "t", "t", "t", "t", "t", "t", "u",
                        "u", "u", "u", "v", "v", "w", "w", "x", "y", "y", "z"};

Singleton::Singleton() = default;

Singleton::~Singleton()
{
    delete m_firstInstance;
}

Singleton *Singleton::getInstance()
{
    if (m_firstInstance == nullptr)
    {
        if (m_firstThread)
        {
            m_firstThread = false;
            std::this_thread::sleep_for(std::chrono::milliseconds(5000));
        }

        //! Without this lock an instance would be created twice if first thread sleeps for a while
        std::lock_guard<std::mutex> guard(m_mutex);
        if (m_firstInstance == nullptr)
        {
            std::cout << "Instance created by " << std::this_thread::get_id() << std::endl;
            m_firstInstance = new Singleton();
            std::random_shuffle(m_scrabbleLetters.begin(), m_scrabbleLetters.end());
        }
    }
    return m_firstInstance;
}

LettersVector &Singleton::getLettersList() const
{
    return m_scrabbleLetters;
}

LettersVector Singleton::getTiles(int howManyTiles)
{
    auto tilesToSend = LettersVector();

    for (auto i = 0; i <= howManyTiles; i++)
    {
        tilesToSend.push_back(m_scrabbleLetters.front());
        m_scrabbleLetters.erase(m_scrabbleLetters.begin());
    }

    return tilesToSend;
}
