#include "texto.hh"

Text::Text(const char* path, std::string texto, u16 size, u16 x, u16 y) {
    font = TTF_OpenFont(path, size);
    write(texto);


    w = surface->w;
    h = surface->h;

    posicao.x = x;
    posicao.y = y;
    posicao.w = w;
    posicao.h = h;
}

void Text::write(std::string texto) {
    // SDL_Color TextColor = { 255, 255, 255, 0};
    surface = TTF_RenderText_Solid(font, texto.c_str(), { 255, 255, 255, 0});
    textura = SDL_CreateTextureFromSurface(System::renderer(), surface);
    SDL_FreeSurface(surface);
}

void Text::set_x(u16 x) {
    this->posicao.x = x;
}

void Text::set_y(u16 y) {
    this->posicao.y = y;
}

void Text::draw() {
    SDL_RenderCopy(System::renderer(), textura, NULL, &posicao);
}

Text::~Text() {
    SDL_DestroyTexture(textura);
    TTF_CloseFont(font);
}

