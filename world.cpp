/*
 * Roguelike Engine in C++
 *
 * Everything related to the world itself - maps, levels, generators, whatnot.
 *
 */

using namespace std;

#include <iostream>

#include "world.h"
#include "common.h"

Cell::Cell()
{
}

Cell::~Cell()
{
}

bool Cell::is_passable()
{
        switch(this->type) {
                case floor:
                case door_open:
                        return true;
                case wall:
                case door_closed:
                case nothing:
                        return false;
        }

        return false;
}
// vim: fdm=syntax guifont=Terminus\ 8


