#ifndef SYSTEM_HH
#define SYSTEM_HH

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_ttf.h>

#include <memory>
#include <exception>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <functional>

#include "memoria.h"
#include "math.hh"
#include "time.hh"
#include "inputs.hh"

class System {
private:
    Engine::Memory<System> instance;
    static Engine::Memory<SDL_Renderer> render;
    Engine::Memory<SDL_Window> janela;
    Time tm;
    bool running;

//    const int IMG_INIT_EVERYTHING = IMG_INIT_JPG | IMG_INIT_PNG | IMG_INIT_TIF | IMG_INIT_WEBP;
//    const int MIX_INIT_EVERYTHING = MIX_INIT_OGG | MIX_INIT_FLAC | MIX_INIT_MID | MIX_INIT_MOD | MIX_INIT_MP3 | MIX_INIT_OPUS;
    const int IMG_INIT_EVERYTHING = IMG_INIT_JPG | IMG_INIT_PNG ;
    const int MIX_INIT_EVERYTHING = MIX_INIT_OGG | MIX_INIT_FLAC | MIX_INIT_MID ;

public:
    System();
    ~System();
    System* sistema();
    static SDL_Renderer* renderer();
    Time get_time();
    SDL_Texture* create_texture(SDL_Surface** surface);
    bool is_running();

public:
    Inputs inputs;
};

#endif
