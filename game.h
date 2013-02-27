/*
 *
 * The Game
 *
 * Copyright (C) 2013
 *
 */

#ifndef _GAME_H
#define _GAME_H

#include "command.h"
#include "display.h"

class Game {
        public:
                Game();
                ~Game();
                void loop();
                bool is_running();
                void endgame();
        protected:
        private:
                Display display;
                bool running;
                Command cmd;
};

#endif

