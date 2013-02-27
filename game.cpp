/*
 * Roguelike Engine in C++
 *
 * The Game (loop etc.)
 *
 */

using namespace std;

#include <iostream>

#include "libtcod.hpp"
#include "actor.h"
#include "debug.h"
#include "display.h"
#include "game.h"

Game::Game()
{
       display.start(); 
       init_commands(&this->cmd);
       running = true;
}

Game::~Game()
{
}

bool Game::is_running()
{
        return running;
}

void Game::endgame()
{
        running = false;
}

void Game::loop()
{
        while (this->is_running()) {
                display.update();
                TCOD_key_t key = TCODConsole::waitForKeypress(true);
                if(key.vk == TCODK_ESCAPE)
                        endgame();
        }
}
