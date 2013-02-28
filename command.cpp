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
#include "debug.h"

command_t command_set_normal[] = {
        { { TCODK_ESCAPE, 0,  1, 0, 0, 0, 0, 0 }, cmd_exit },
        { { TCODK_CHAR,  'q', 1, 0, 0, 0, 0, 0 }, cmd_exit },
};

Command::Command()
{
}

Command::~Command()
{
}

void Command::add_command(TCOD_key_t key, command_type cmd)
{
        command_t c;

        c.cmd = cmd;
        c.key = key;

        command_list.push_back(c);
        //dbg("added command %d char %c command_type %d", key, ch, cmd);
}

command_type Command::get_command()
{
        command_type ret;
        vector<struct command_t>::iterator i;

        ret = cmd_nothing;

        TCOD_key_t key = TCODConsole::waitForKeypress(true);
        for(i = command_list.begin(); i != command_list.end(); ++i) {
                if(key.vk == TCODK_CHAR) {
                        if(key.c == i->key.c)
                                return i->cmd;
                } else {
                        if(key.vk == i->key.vk)
                                return i->cmd;
                }
        }

        return ret;
}

void init_commands(Command *c)
{
        int num, i;

        num = sizeof(command_set_normal) / sizeof(struct command_t);
        for(i = 0; i < num; i++)
                c->add_command(command_set_normal[i].key, command_set_normal[i].cmd);

}
