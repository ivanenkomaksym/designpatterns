#ifndef ITERATOR_H
#define ITERATOR_H

#include <iostream>
#include <memory>

#include "iterator/songsofthe70s.h"
#include "iterator/songsofthe80s.h"
#include "iterator/songsofthe90s.h"

#include "iterator/diskjokey.h"

/*!
 * What is the Iterator Design Pattern
 *
 * The Iterator pattern provides you with a uniform way to access
 * different collections of Objects
 *
 * If you gen an Array, ArrayList and Hashtable of Objects, you pop
 * out an iterator for each and treat them the same
 *
 * This provides a uniform way to cycle through different collections
 *
 * You can also write polymorphic code because you can refer to each
 * collection of objects because they'll implement the same interface
 *
 */

void iteratorPattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "=======================Iterator Pattern=====================" << std::endl;

    SongsOfThe70s songs70s;
    SongsOfThe80s songs80s;
    SongsOfThe90s songs90s;

    DiskJokey madMike(songs70s, songs80s, songs90s);
    madMike.showTheSongs();
    madMike.showTheSongs2();

    std::cout << "=======================Iterator Pattern=====================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // ITERATOR_H
