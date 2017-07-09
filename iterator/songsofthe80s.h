#ifndef SONGSOFTHE80S_H
#define SONGSOFTHE80S_H

#include "iterator/songinfo.h"
#include "iterator/songiterator.h"

class SongsOfThe80s : public SongIterator
{
public:
    explicit SongsOfThe80s();
    ~SongsOfThe80s() = default;

    virtual const SongInfo *getNext() override;

    void addSong(std::string songName,
                 std::string bandName,
                 int yeadReleased);

    SongInfo *getBestSongs() { return m_bestSongs; }

private:
    SongInfo m_bestSongs[3];
    size_t m_arraySize = 0;
};

#endif // SONGSOFTHE80S_H
