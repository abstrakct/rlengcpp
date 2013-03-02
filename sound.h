/*
 * Sound stuff
 *
 * Copyright (C) 2013
 *
 */

#ifndef _SOUND_H
#define _SOUND_H

#include "SDL/SDL.h"
#include "SDL/SDL_mixer.h"

#define SOUND_X 0
#define SOUND_X_FILENAME "asdf.wav"
#define SOUND_Y 1
#define SOUND_Y_FILENAME "asdf.wav"

#define NUM_SOUNDS 32

class SoundEngine {
        public:
                SoundEngine();
                ~SoundEngine();
                int initialize();
                void load_file(const char *filename);
                void play_sound(int sound);
                void play_sound(int sound, int ms);       // play sound, fade in ms milliseconds.
                void play_sound_infinite_loop(int sound);
                void set_sound_volume(int sound, int volume);
                void pause_sound(int sound);
                void pause_sound(int sound, int ms);
        private:
                struct {
                        Mix_Chunk *chunk;
                        int channel;
                } s[NUM_SOUNDS];
                int sounds_count;
                int audio_rate;
                Uint16 audio_format;
                int audio_channels;
                int audio_buffers;
};


#endif
// vim: fdm=syntax guifont=Terminus\ 8

