/*
 * Roguelike Engine in C++
 */

using namespace std;

#include <iostream>

#include "libtcod.hpp"

// #include "actor.h"
#include "command.h"
#include "debug.h"
#include "display.h"
#include "game.h"
#include "player.h"

Game *game;
Display *display;
Player *player;

int main(int argc, char **argv)
{
        game = new Game;
        player = new Player;

        game->loop();
        
        delete player;
        delete game;

        return 0;
}
