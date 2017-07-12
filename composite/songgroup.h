#ifndef SONGGROUP_H
#define SONGGROUP_H

#include "composite/songcomponent.h"

#include <vector>

class SongGroup : public SongComponent
{
public:
    explicit SongGroup(std::string groupName,
                       std::string groupDescription);

    const std::string &getGroupName() const;
    const std::string &getGroupDescription() const;

private:
    virtual void add(std::unique_ptr<SongComponent> newSongComponent) override;
    virtual void remove(SongComponent &newSongComponent) override;
    virtual SongComponent *getComponent(size_t index) const override;
    virtual void displaySongInfo() const override;

    std::string m_groupName;
    std::string m_groupDescription;
    std::vector<std::unique_ptr<SongComponent>> m_songComponents;
};

#endif // SONGGROUP_H
