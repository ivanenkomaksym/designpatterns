#include "composite/compositediskjokey.h"

CompositeDiskJokey::CompositeDiskJokey(std::unique_ptr<SongComponent> newSongList)
    : m_songList(std::move(newSongList))
{
}

void CompositeDiskJokey::getSongList()
{
    m_songList->displaySongInfo();
}
