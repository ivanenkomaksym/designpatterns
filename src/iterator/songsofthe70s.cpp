#include "iterator/songsofthe70s.h"

SongsOfThe70s::SongsOfThe70s()
{
    addSong("Imagine", "John Lennon", 1971);
    addSong("American Pie", "Don McLean", 1971);
    addSong("I Will Survive", "Gloria Gaynor", 1979);
}

const SongInfo *SongsOfThe70s::getNext()
{
    if (m_index < m_bestSongs.size())
        return &m_bestSongs[m_index++];
    else
        return nullptr;
}

void SongsOfThe70s::addSong(std::string songName,
                            std::string bandName,
                            int yeadReleased)
{
    auto songInfo = SongInfo(songName, bandName, yeadReleased);
    m_bestSongs.emplace_back(songInfo);
}
