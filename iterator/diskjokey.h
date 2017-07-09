#ifndef DISKJOKEY_H
#define DISKJOKEY_H

class SongsOfThe70s;
class SongsOfThe80s;
class SongsOfThe90s;
class SongIterator;

class DiskJokey
{
public:
    explicit DiskJokey(SongsOfThe70s &songs70s,
                       SongsOfThe80s &songs80s,
                       SongsOfThe90s &songs90s);
    ~DiskJokey() = default;

    void showTheSongs();
    void showTheSongs2();
    void printTheSongs(SongIterator &iterator);

private:
    SongsOfThe70s &m_songs70s;
    SongsOfThe80s &m_songs80s;
    SongsOfThe90s &m_songs90s;
    SongIterator  &m_iterSongs70s;
    SongIterator  &m_iterSongs80s;
    SongIterator  &m_iterSongs90s;
};

#endif // DISKJOKEY_H
