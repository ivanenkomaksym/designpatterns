#ifndef SONGSOFTHE90S_H
#define SONGSOFTHE90S_H

#include "iterator/songinfo.h"
#include "iterator/songiterator.h"

#include <unordered_set>

class SongsOfThe90s : public SongIterator
{
public:
    explicit SongsOfThe90s();
    ~SongsOfThe90s() = default;

    virtual const SongInfo *getNext() override;

    void addSong(std::string songName,
                 std::string bandName,
                 int yeadReleased);

    std::unordered_set<SongInfo, SongInfoHasher> &getBestSongs() { return m_bestSongs; }

private:
    std::unordered_set<SongInfo, SongInfoHasher> m_bestSongs;
};

#endif // SONGSOFTHE80S_H
