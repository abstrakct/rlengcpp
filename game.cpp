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
#include "player.h"

extern Display *display;
extern Player *player;

Game::Game()
{
        display = new Display;

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

        //console.print(10, 10, "Welcome to game!!");

        while (this->is_running()) {
                player->draw();
                display->update();

                c = cmd.get_command();
                switch(c) {
                        case cmd_exit:
                                endgame();
                        default:
                                break;
                }
        }
}

void Game::intro()
{
}
