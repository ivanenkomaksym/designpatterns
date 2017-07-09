#ifndef SONGSOFTHE70S_H
#define SONGSOFTHE70S_H

#include "iterator/songinfo.h"
#include "iterator/songiterator.h"

#include <vector>

class SongsOfThe70s : public SongIterator
{
public:
    explicit SongsOfThe70s();
    ~SongsOfThe70s() = default;

    virtual const SongInfo *getNext() override;

    void addSong(std::string songName,
                 std::string bandName,
                 int yeadReleased);

    std::vector<SongInfo> &getBestSongs() { return m_bestSongs; }

private:
    std::vector<SongInfo> m_bestSongs;
};

#endif // SONGSOFTHE70S_H
