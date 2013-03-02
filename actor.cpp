/*
 * Generic actor class definition
 *
 * Copyright (C) 2013
 */

using namespace std;
#include "common.h"
#include "actor.h"


Actor::Actor()
{
        role = role_unknown;
        c = ' ';
        co.x = co.y = 0;
        alive = true;
}

/*Actor::~Actor()
{
}*/

/*bool Actor::is_player()
{
        if(role == player)
                return true;
        else
                return false;
}*/

bool Actor::is_alive()
{
        if(alive)
                return true;
        else
                return false;
}

void Actor::kill()
{
        alive = false;
}

void Actor::setxy(int x, int y)
{
        this->co.x = x;
        this->co.y = y;
}

void Actor::setchar(char newc)
{
        c = newc;
}

void Actor::draw()
{
        display->put(this->co.x, this->co.y, this->c);
}
// vim: fdm=syntax guifont=Terminus\ 8
