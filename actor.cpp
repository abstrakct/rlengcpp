/*
 *
 * Generic actor class definition
 *
 * Copyright (C) 2013
 */

using namespace std;
#include "actor.h"

Actor::Actor()
{
        alive = true;
}

Actor::~Actor()
{
}

bool Actor::is_player()
{
        return false;
}

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
