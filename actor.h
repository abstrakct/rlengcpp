/*
 *
 * Generic actor class definition
 *
 * Copyright (C) 2013
 *
 */

#ifndef _ACTOR_H
#define _ACTOR_H

#include "common.h"

enum e_role {
        role_unknown = 0,
        role_player,
        role_npc,
        role_enemy,
};

class Actor {
        public:
                Actor();
                ~Actor();
                virtual bool is_player() = 0;
                bool is_alive();
                void kill();
                void draw();
                void setxy(int x, int y);
                void setchar(char newc);
        protected:
        private:
                e_role role;
                bool alive;
                char c;
                coord_t co;
};

#endif
