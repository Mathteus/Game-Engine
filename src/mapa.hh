#ifndef MAPA_HH
#define MAPA_HH

//includes C++
#include <vector>
#include <fstream>
#include <iostream>

//includes Engine
#include "main.hh"
#include "sistema.hh"
#include "textura.hh"

class Mapa {
private:
    uint32_t w, h;
    bool visible;
    SDL_Rect animacao, posicao;
    std::ifstream leitor;
    Textura texture;
    // int** atlas;

public:
    void init(const char* path, uint32_t width, uint32_t height, uint8_t tiles);
    void set_visible(bool visivel);
    bool get_visible();
    SDL_Point getPosition();
    // GPU_Rect getRect();
};

#endif
