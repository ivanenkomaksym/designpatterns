#include "composite/song.h"

#include <iostream>

Song::Song(std::string songName,
           std::string bandName,
           int releaseYear)
    : m_songName(songName)
    , m_bandName(bandName)
    , m_releaseYear(releaseYear)
{
}

const std::string &Song::getSongName() const
{
    return m_songName;
}

const std::string &Song::getBandName() const
{
    return m_bandName;
}

int Song::getReleaseYear() const
{
    return m_releaseYear;
}

void Song::displaySongInfo() const
{
    std::cout << getSongName() << " was recorded by " << getBandName()
              << " in " << getReleaseYear() << std::endl;
}
