#include "iterator/diskjokey.h"

#include "iterator/songsofthe70s.h"
#include "iterator/songsofthe80s.h"
#include "iterator/songsofthe90s.h"

#include <iostream>

DiskJokey::DiskJokey(SongsOfThe70s &songs70s,
                     SongsOfThe80s &songs80s,
                     SongsOfThe90s &songs90s)
    : m_songs70s(songs70s)
    , m_songs80s(songs80s)
    , m_songs90s(songs90s)
    , m_iterSongs70s(songs70s)
    , m_iterSongs80s(songs80s)
    , m_iterSongs90s(songs90s)
{
}

void DiskJokey::showTheSongs()
{
    auto &songs70s = m_songs70s.getBestSongs();
    std::cout << "Songs of the 70s:" << std::endl;
    for (auto s: songs70s)
    {
        std::cout << s.getSongName() << std::endl;
        std::cout << s.getBandName() << std::endl;
        std::cout << s.getYearReleased() << std::endl;
    }
    std::cout << std::endl;

    auto songs80s = m_songs80s.getBestSongs();
    std::cout << "Songs of the 80s:" << std::endl;
    for (auto i = 0; i < 3; i++)
    {
        auto &songInfo = songs80s[i];
        std::cout << songInfo.getSongName() << std::endl;
        std::cout << songInfo.getBandName() << std::endl;
        std::cout << songInfo.getYearReleased() << std::endl;
    }
    std::cout << std::endl;

    auto songs90s = m_songs90s.getBestSongs();
    std::cout << "Songs of the 90s:" << std::endl;
    for (auto s: songs90s)
    {
        std::cout << s.getSongName() << std::endl;
        std::cout << s.getBandName() << std::endl;
        std::cout << s.getYearReleased() << std::endl;
    }
    std::cout << std::endl;
}

void DiskJokey::showTheSongs2()
{
    std::cout << "NEW WAY WITH ITERATION" << std::endl;

    std::cout << "Songs of the 70s:" << std::endl;
    printTheSongs(m_iterSongs70s);
    std::cout << "Songs of the 80s:" << std::endl;
    printTheSongs(m_iterSongs80s);
    std::cout << "Songs of the 90s:" << std::endl;
    printTheSongs(m_iterSongs90s);
}

void DiskJokey::printTheSongs(SongIterator &iterator)
{
    while (auto songInfo = iterator.getNext())
    {
        std::cout << songInfo->getSongName() << std::endl;
        std::cout << songInfo->getBandName() << std::endl;
        std::cout << songInfo->getYearReleased() << std::endl;
    }
}
