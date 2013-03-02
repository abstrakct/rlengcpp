/*
 * Roguelike Engine in C++
 *
 * The Game (loop etc.)
 *
 */

using namespace std;

#include <iostream>

#include "actor.h"
#include "player.h"
#include "common.h"

Player::Player()
{
        health = 0;
        setchar('@');
        setxy(10, 10);
}

Player::~Player()
{
        dbg("Goodbye, cruel world.");
}
