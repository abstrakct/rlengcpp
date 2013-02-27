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
        command_type c;

        while (this->is_running()) {
                display.update();

                c = cmd.get_command();
                if(c == cmd_exit)
                        endgame();
        }
}
