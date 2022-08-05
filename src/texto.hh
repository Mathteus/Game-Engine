#ifndef TEXTO_HH
#define TEXTO_HH

#include "system.hh"

class Text {
private:
    SDL_Rect posicao;
    SDL_Surface* surface;
    SDL_Color color;
    SDL_Texture* textura;
    TTF_Font* font;
    u16 h, w;

public:
    Text(const char* path, std::string texto, u16 size, u16 x, u16 y);
    ~Text();
    void draw();
    void set_x(u16 font_x);
    void set_y(u16 font_y);
    void set_color(SDL_Color cor);
    void set_text(std::string txt);
    void write(std::string texto);
};

#endif
