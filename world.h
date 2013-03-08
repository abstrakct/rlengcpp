/*
 * Everything related to the world itself - maps, levels, generators, whatnot.
 *
 * Copyright (C) 2013
 *
 */

#ifndef _WORLD_H
#define _WORLD_H

#include "libtcod.hpp"

enum cell_type {
        nothing,
        wall,
        floor,
        door_open,
        door_closed,
};

class Cell {
        private:
                cell_type type;
                int       flags;
                TCOD_color_t fg, bg;
        protected:
        public:
                Cell();
                ~Cell();
                bool is_passable();
};

#endif
// vim: fdm=syntax guifont=Terminus\ 8

