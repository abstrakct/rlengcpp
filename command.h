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
        cmd_nothing = 0,
        cmd_exit,
        cmd_wait,
};

struct command_t {
        TCOD_keycode_t key;
        command_type cmd;
};

class Command {
        public:
                Command();
                ~Command();
                void add_command(command_type cmd, TCOD_keycode_t key);
                command_type get_command();
        private:
                vector <struct command_t> command_list;
};

// prototypes


void init_commands(Command *c);

#endif

