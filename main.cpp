using namespace std;

#include <iostream>

#include "libtcod.hpp"
#include "actor.h"


int main()
{
        actor test;

        cout << "TEST" << endl;

        if(test.is_alive())
                cout << "test is alive!" << endl;
        else
                cout << "test is dead!" << endl;

        test.kill();

        if(test.is_alive())
                cout << "test is alive!" << endl;
        else
                cout << "test is dead!" << endl;

        return 0;
}
