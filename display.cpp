/*
 * Roguelike Engine in C++
 *
 * Display handling with libtcod
 *
 */

using namespace std;

#include <iostream>

#include "libtcod.hpp"

#include "display.h"

Display::Display()
{
        char t[] = "Test";

        set_resolution(1024, 600);
        set_title(t);
}

Display::~Display()
{

}

void Display::set_resolution(int w, int h)
{
        width = w;
        height = h;
        chars_x = w / 8;
        chars_y = h / 8;
}

void Display::set_title(char *window_title)
{
        strcpy(title, window_title);
}

void Display::start()
{
        TCODConsole::setCustomFont("ds.png", TCOD_FONT_LAYOUT_ASCII_INROW, 16, 16);
        TCODConsole::initRoot(chars_x, chars_y, title, false, TCOD_RENDERER_SDL);
}

void Display::update()
{
        TCODConsole::flush();
}
