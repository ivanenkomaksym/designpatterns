#ifndef SONGINFO_H
#define SONGINFO_H

#include <string>

class SongInfoHasher;

class SongInfo
{
public:
    explicit SongInfo() = default;
    explicit SongInfo(std::string newSongName,
                      std::string newBandName,
                      int newYearReleased);
    virtual ~SongInfo() = default;

    const std::string &getSongName() const { return m_songName; }
    const std::string &getBandName() const { return m_bandName; }
    int getYearReleased() const { return m_yearReleased; }

    bool operator==(const SongInfo &other) const;

private:
    friend SongInfoHasher;

    std::string m_songName;
    std::string m_bandName;
    int         m_yearReleased;
};

struct SongInfoHasher
{
    std::size_t operator()(const SongInfo &songInfo) const;
};
#endif // SONGINFO_H
