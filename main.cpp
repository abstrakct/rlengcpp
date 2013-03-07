/*
 * Roguelike Engine in C++
 */

using namespace std;

#include <iostream>

#include <unistd.h>
#include "libtcod.hpp"

// #include "actor.h"
#include "command.h"
#include "debug.h"
#include "display.h"
#include "game.h"
#include "player.h"
#include "sound.h"

Game *game;
Display *display;
Player *player;
SoundEngine *audio;

int main(int argc, char **argv)
{
        game = new Game;
        player = new Player;
        audio = new SoundEngine;

        audio->initialize();
        //audio->load_all_files();

        game->loop();
        
        delete audio;
        delete player;
        delete game;

        return 0;
}

// vim: fdm=syntax guifont=Terminus\ 8
