#include "iterator/songinfo.h"

#include <functional>

SongInfo::SongInfo(std::__cxx11::string newSongName, std::__cxx11::string newBandName, int newYearReleased)
    : m_songName(newSongName)
    , m_bandName(newBandName)
    , m_yearReleased(newYearReleased)
{
}

bool SongInfo::operator==(const SongInfo &other) const
{
    return m_songName == other.m_songName &&
           m_bandName == other.m_bandName &&
           m_yearReleased == other.m_yearReleased;
}

std::size_t SongInfoHasher::operator()(const SongInfo &songInfo) const
{
    auto h1 = std::hash<std::string>{}(songInfo.m_songName);
    auto h2 = std::hash<std::string>{}(songInfo.m_bandName);
    auto h3 = std::hash<int>{}(songInfo.m_yearReleased);

    return ((h1 ^ (h2 << 1)) >> 1) ^ (h3 << 1);
}
