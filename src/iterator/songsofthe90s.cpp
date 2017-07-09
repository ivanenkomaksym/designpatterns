#include "iterator/songsofthe90s.h"

SongsOfThe90s::SongsOfThe90s()
{
    addSong("Losing My Religion", "REM", 1991);
    addSong("Creep", "Radiohead", 1993);
    addSong("Walk on the Ocean", "Toad The Wet Sprocket", 1991);
}

const SongInfo *SongsOfThe90s::getNext()
{
    if (m_index < m_bestSongs.size())
        return &*(std::next(m_bestSongs.begin(), m_index++));
    else
        return nullptr;
}

void SongsOfThe90s::addSong(std::string songName,
                            std::string bandName,
                            int yeadReleased)
{
    auto songInfo = SongInfo(songName, bandName, yeadReleased);
    m_bestSongs.insert(songInfo);
}
