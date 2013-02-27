/*
 * Roguelike Engine in C++
 *
 * The Game (loop etc.)
 *
 */

using namespace std;

#include <iostream>
#include <vector>

#include "libtcod.hpp"
#include "command.h"

struct command_t command_set_normal[] = {
        { TCODK_ESCAPE, cmd_exit },
};

Command::Command()
{
}

Command::~Command()
{
}

void Command::add_command(command_type cmd, TCOD_keycode_t key)
{
        command_t c;

        c.cmd = cmd;
        c.key = key;

        command_list.push_back(c);
}

command_type Command::get_command()
{
        command_type ret;
        vector<struct command_t>::iterator i;

        ret = cmd_nothing;

        TCOD_key_t key = TCODConsole::waitForKeypress(true);
        for(i = command_list.begin(); i != command_list.end(); ++i) {
                if(key.vk == i->key)
                        ret = i->cmd;
        }

        return ret;
}

void init_commands(Command *c)
{
        int num, i;

        num = sizeof(command_set_normal) / sizeof(struct command_t);
        for(i = 0; i < num; i++)
                c->add_command(command_set_normal[i].cmd, command_set_normal[i].key);

}
