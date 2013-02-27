/*
 * Roguelike Engine in C++
 */

using namespace std;

#include <iostream>

#include "libtcod.hpp"

#include "actor.h"
#include "command.h"
#include "debug.h"
#include "display.h"
#include "game.h"


Game *game;

int main(int argc, char **argv)
{
        game = new Game;

        dbg("Entering game loop.");
        game->loop();
        dbg("Exited game loop.");
        
        return 0;
}
