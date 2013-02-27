/*
 *
 * Generic actor class definition
 *
 * Copyright (C) 2013
 *
 */

#ifndef _ACTOR_H
#define _ACTOR_H

class actor {
        public:
                actor();
                ~actor();
                bool is_player();
                bool is_alive();
                void kill();
        protected:
        private:
                bool alive;
};

#endif
