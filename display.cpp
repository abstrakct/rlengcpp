/*
 * Roguelike Engine in C++
 *
 * Display handling with libtcod
 *
 */

using namespace std;

#include <iostream>

#include "libtcod.hpp"

#include "debug.h"
#include "display.h"

Display::Display()
{
        char t[] = "Test";

        set_resolution(1024, 600);
        set_title(t);

        TCODConsole::initRoot(chars_x, chars_y, title, false, TCOD_RENDERER_SDL);
        TCODConsole::setCustomFont("terminal8x14_gs_ro.png", TCOD_FONT_TYPE_GRAYSCALE | TCOD_FONT_LAYOUT_ASCII_INROW, 16, 16);
        console = new TCODConsole(chars_x, chars_y);
        console->setCustomFont("terminal8x14_gs_ro.png", TCOD_FONT_TYPE_GRAYSCALE | TCOD_FONT_LAYOUT_ASCII_INROW, 16, 16);
        console->setKeyboardRepeat(350, 70);
}

Display::~Display()
{
        delete console;
}

void Display::set_resolution(int w, int h)
{
        width = w;
        height = h;
        chars_x = w / 8;
        chars_y = h / 8;
        dbg("Set resolution to %d,%d", w, h);
}

void Display::set_title(char *window_title)
{
        strcpy(title, window_title);
}

TCOD_key_t Display::get_key(bool flush)
{
        console->flush();
        return console->checkForKeypress(TCOD_KEY_PRESSED);
}

char *Display::get_title()
{
        return title;
}

void Display::update()
{
        TCODConsole::blit(console, 0, 0, chars_x, chars_y, TCODConsole::root, 0, 0);
        TCODConsole::flush();
}

void Display::put(int x, int y, int c, TCOD_bkgnd_flag_t flag)
{
        console->putChar(x, y, c, flag);
}
// vim: fdm=syntax guifont=Terminus\ 8
