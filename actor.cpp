/*
 *
 * Generic actor class definition
 *
 * Copyright (C) 2013
 */

using namespace std;
#include "actor.h"

actor::actor()
{
        alive = true;
}

actor::~actor()
{
}

bool actor::is_player()
{
        return false;
}

bool actor::is_alive()
{
        if(alive)
                return true;
        else
                return false;
}

void actor::kill()
{
        alive = false;
}
