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
                void start(char *window_title);
        protected:
        private:
                int width, height;
                
};

#endif

