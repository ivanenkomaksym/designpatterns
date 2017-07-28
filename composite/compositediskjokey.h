#ifndef COMPOSITEDISKJOKEY_H
#define COMPOSITEDISKJOKEY_H

#include "composite/songcomponent.h"

class CompositeDiskJokey
{
public:
    explicit CompositeDiskJokey(std::unique_ptr<SongComponent> newSongList);
    ~CompositeDiskJokey() = default;

    void getSongList();

private:
    std::unique_ptr<SongComponent> m_songList;
};

#endif // COMPOSITEDISKJOKEY_H
