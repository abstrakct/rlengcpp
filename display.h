/*
 *
 * Display handling etc.
 *
 * Copyright (C) 2013
 *
 */

#ifndef _DISPLAY_H
#define _DISPLAY_H

class Display {
        public:
                Display();
                ~Display();
                void set_resolution(int w, int h);
                void set_title(char *window_title);
                void start();
                void update();
        protected:
        private:
                int width, height;
                int chars_x, chars_y;
                char title[256];
};

#endif

