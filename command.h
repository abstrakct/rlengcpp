/*
 *
 * Handle commands / input
 *
 * Copyright (C) 2013
 *
 */

#ifndef _COMMAND_H
#define _COMMAND_H

using namespace std;

#include <vector>
#include "libtcod.hpp"

enum command_type {
        cmd_exit = 0,
        cmd_wait = 1
};

struct command_t {
        command_type cmd;
        TCOD_keycode_t key;
};

class Command {
        public:
                Command();
                ~Command();
                void add_command(command_type cmd, TCOD_keycode_t key);
        private:
                vector <struct command_t> command_list;
};

// prototypes


void init_commands(Command *c);

#endif

