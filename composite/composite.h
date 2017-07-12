#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "composite/song.h"
#include "composite/songgroup.h"
#include "composite/compositediskjokey.h"

#include <iostream>

/*!
 * What is the Composite Pattern
 *
 * Allows you to treat individual objects and compositions of objects uniformly
 *
 * They allow you to represent part-whole hierarchies
 *
 * Components can be further divided into smaller components
 *
 * You can structure data, or represent the inner working of every part
 * of a whole object individually
 */

void compositePattern()
{
    std::cout << "============================================================" << std::endl;
    std::cout << "=======================Composite Pattern====================" << std::endl;

    std::unique_ptr<SongComponent> industrialMusic = std::make_unique<SongGroup>("Industrial",
                                                "is a style of experimental music that draws on transgressive and provocative themes");
    industrialMusic->add(std::make_unique<Song>("Head Like a Hole", "NIN", 1990));
    industrialMusic->add(std::make_unique<Song>("Headhunter", "Front 242", 1988));

    std::unique_ptr<SongComponent> heavyMetalMusic = std::make_unique<SongGroup>("Heavy Metal",
                                                "is a genre of rock that developed in the late 1960s, largely in the UK and in the US");
    heavyMetalMusic->add(std::make_unique<Song>("War Pigs", "Black Sabath", 1970));
    heavyMetalMusic->add(std::make_unique<Song>("Ace of Spades", "Motorhead", 1980));

    std::unique_ptr<SongComponent> dubstepMusic = std::make_unique<SongGroup>("Dubstep",
                                                "is a genre of electronic dance music that originated in South London, England");
    dubstepMusic->add(std::make_unique<Song>("Centipede", "Knife Party", 2012));
    dubstepMusic->add(std::make_unique<Song>("Tetris", "Doctor P", 2011));

    industrialMusic->add(std::move(dubstepMusic));

    std::unique_ptr<SongComponent> everySong = std::make_unique<SongGroup>("Song List", "Every Song Available");
    everySong->add(std::move(industrialMusic));
    everySong->add(std::move(heavyMetalMusic));

    CompositeDiskJokey crazyLarry(std::move(everySong));
    crazyLarry.getSongList();

    std::cout << "=======================Composite Pattern====================" << std::endl;
    std::cout << "============================================================" << std::endl;
}

#endif // COMPOSITE_H
