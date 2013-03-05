/*
 * Display handling etc.
 *
 * Copyright (C) 2013
 *
 */

#ifndef _DISPLAY_H
#define _DISPLAY_H

#include "libtcod.hpp"

class Display {
        public:
                Display();
                ~Display();
                void set_resolution(int w, int h);
                void set_title(char *window_title);
                char *get_title();
                void update();
                void put(int x, int y, int c, TCOD_bkgnd_flag_t flag = TCOD_BKGND_DEFAULT);
                TCOD_key_t get_key(bool flush);
        protected:
        private:
                int width, height;
                int chars_x, chars_y;
                char title[256];
                TCODConsole *console;
};

#endif

// vim: fdm=syntax guifont=Terminus\ 8
