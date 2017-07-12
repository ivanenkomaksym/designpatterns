#include "composite/songgroup.h"

#include <iostream>
#include <algorithm>

SongGroup::SongGroup(std::string groupName,
                     std::string groupDescription)
    : m_groupName(groupName)
    , m_groupDescription(groupDescription)
{
}

const std::string &SongGroup::getGroupName() const
{
    return m_groupName;
}

const std::string &SongGroup::getGroupDescription() const
{
    return m_groupDescription;
}

void SongGroup::add(std::unique_ptr<SongComponent> newSongComponent)
{
    m_songComponents.emplace_back(std::move(newSongComponent));
}

void SongGroup::remove(SongComponent &newSongComponent)
{
    m_songComponents.erase(std::remove_if(m_songComponents.begin(), m_songComponents.end(),
                              [&newSongComponent](auto &songComponent)
                              { return songComponent.get() == &newSongComponent; }),
                            m_songComponents.end());
}

SongComponent *SongGroup::getComponent(size_t index) const
{
    if (index < m_songComponents.size())
        return m_songComponents.at(index).get();
    else
        return nullptr;
}

void SongGroup::displaySongInfo() const
{
    std::cout << getGroupName() << " " << getGroupDescription() << std::endl;
    for (auto &songComponent : m_songComponents)
    {
        songComponent->displaySongInfo();
    }
}
