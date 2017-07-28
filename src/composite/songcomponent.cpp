#include "composite/songgroup.h"

void SongComponent::add(std::unique_ptr<SongComponent> newSongComponent)
{
    // Not supported
}

void SongComponent::remove(SongComponent &newSongComponent)
{
    // Not supported
}

SongComponent *SongComponent::getComponent(size_t index) const
{
    // Not supported
    return nullptr;
}
const std::string &SongComponent::getSongName() const
{
    // Not supported
    static std::string str;
    return str;
}

const std::string &SongComponent::getBandName() const
{
    // Not supported
    static std::string str;
    return str;
}

int SongComponent::getReleaseYear() const
{
    // Not supported
    return 0;
}

void SongComponent::displaySongInfo() const
{
    // Not supported
}
