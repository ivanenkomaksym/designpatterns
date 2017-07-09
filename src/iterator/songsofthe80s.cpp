#include "iterator/songsofthe80s.h"

SongsOfThe80s::SongsOfThe80s()
{
    addSong("Room", "B52s", 1989);
    addSong("Cruel Summer", "Banarama", 1984);
    addSong("Head Over Heels", "Tears for Fears", 1985);
}

const SongInfo *SongsOfThe80s::getNext()
{
    if (m_index < m_arraySize)
        return &m_bestSongs[m_index++];
    else
        return nullptr;
}

void SongsOfThe80s::addSong(std::string songName,
                            std::string bandName,
                            int yeadReleased)
{
    auto songInfo = SongInfo(songName, bandName, yeadReleased);
    m_bestSongs[m_arraySize++] = songInfo;
}
