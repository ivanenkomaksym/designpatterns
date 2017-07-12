#ifndef SONG_H
#define SONG_H

#include "composite/songcomponent.h"

class Song : public SongComponent
{
public:
    explicit Song(std::string songName,
                  std::string bandName,
                  int releaseYear);
    virtual ~Song() = default;

private:
    virtual const std::string &getSongName() const override;
    virtual const std::string &getBandName() const override;
    virtual int getReleaseYear() const override;
    virtual void displaySongInfo() const override;

    std::string m_songName;
    std::string m_bandName;
    int m_releaseYear;
};

#endif // SONG_H
