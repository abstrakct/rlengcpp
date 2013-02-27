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
        width = 1024;  // default resolution
        height = 600;
}

Display::~Display()
{

}

void Display::set_resolution(int w, int h)
{
        width = w;
        height = h;
}

void Display::start(char *window_title)
{
        TCODConsole::setCustomFont("ds.png", TCOD_FONT_LAYOUT_ASCII_INROW, 16, 16);
        TCODConsole::initRoot(width/8, height/8, window_title, false, TCOD_RENDERER_SDL);
}
