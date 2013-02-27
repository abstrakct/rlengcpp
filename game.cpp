/*
 * Roguelike Engine in C++
 *
 * The Game (loop etc.)
 *
 */

using namespace std;

#include <iostream>

#include "actor.h"
#include "display.h"
#include "game.h"

Game::Game()
{
       display.start("TEST"); 
}

Game::~Game()
{
}
