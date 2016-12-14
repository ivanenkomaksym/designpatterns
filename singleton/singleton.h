#ifndef SINGLETON_H
#define SINGLETON_H

#include <mutex>
#include <string>
#include <vector>

using LettersVector = std::vector<std::string>;

class Singleton
{
public:
    ~Singleton();

    static Singleton *getInstance();

    LettersVector &getLettersList() const;
    LettersVector getTiles(int howManyTiles);

private:
    explicit Singleton();

    static Singleton *m_firstInstance;
    static bool m_firstThread;
    static LettersVector m_scrabbleLetters;
    static std::mutex m_mutex;
};

#endif // SINGLETON_H
