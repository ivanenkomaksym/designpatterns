#ifndef SONGCOMPONENT_H
#define SONGCOMPONENT_H

#include <memory>
#include <string>

class SongComponent
{
public:
    virtual ~SongComponent() = default;

    virtual void add(std::unique_ptr<SongComponent> newSongComponent);
    virtual void remove(SongComponent &newSongComponent);
    virtual SongComponent *getComponent(size_t index) const;
    virtual const std::string &getSongName() const;
    virtual const std::string &getBandName() const;
    virtual int getReleaseYear() const;
    virtual void displaySongInfo() const;
};

#endif // SONGCOMPONENT_H
