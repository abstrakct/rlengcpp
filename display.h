/*
 * Display handling etc.
 *
 * Copyright (C) 2013
 *
 */

#ifndef _DISPLAY_H
#define _DISPLAY_H

#include "libtcod.hpp"

#define CHARS_X 128
#define CHARS_Y 75

#define LEFT_X 0
#define LEFT_Y 0
#define LEFT_W (CHARS_X - 90)
#define LEFT_H 60

#define MAP_X (LEFT_W)
#define MAP_Y 0
#define MAP_W 90
#define MAP_H 60

#define BOTTOM_X 0
#define BOTTOM_Y (LEFT_H)
#define BOTTOM_W CHARS_X
#define BOTTOM_H (CHARS_Y - MAP_H)

class Display {
        public:
                Display();
                ~Display();
                void set_resolution(int w, int h);
                void set_title(char *window_title);
                char *get_title();
                void draw_game_screen();
                void update();
                void put(int x, int y, int c, TCOD_bkgnd_flag_t flag = TCOD_BKGND_DEFAULT);
                void putmap(int x, int y, int c, TCOD_bkgnd_flag_t flag = TCOD_BKGND_DEFAULT);
                TCOD_key_t get_key(bool flush);
        protected:
        private:
                int width, height;
                int chars_x, chars_y;
                char title[256];
                TCODConsole *console;
                TCODConsole *map;
                TCODConsole *left;
                TCODConsole *bottom;
};

#endif

// vim: fdm=syntax guifont=Terminus\ 8
