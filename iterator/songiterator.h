#ifndef SONGITERATOR_H
#define SONGITERATOR_H

class SongInfo;

class SongIterator
{
public:
    virtual ~SongIterator() = default;

    virtual const SongInfo *getNext() = 0;

protected:
    size_t m_index = 0;
};

#endif // SONGITERATOR_H
