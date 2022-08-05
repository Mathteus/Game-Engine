#include "mapa.hh"

void Mapa::init(const char* path, uint32_t width, uint32_t height, uint8_t tales) {
     w = width; h = height; visible = true;
    // if (texture.init(path)) std::cerr << "ERRO ao carregar TileSet Mapa !!!\n";

    // leitor.open(path);
}

//void Mapa::renderizar() {
//    if(camera.x < 0)
//		camera.x = 0;

//	if(camera.y < 0)
//		camera.y = 0;

//	if(camera.x > 3000 - camera.w)
//		camera.x = 3000 - camera.w;

//	if(camera.y > 1500 - camera.h)
//		camera.y = 1500 - camera.h;

//    if(visible)
//        SDL_RenderCopy(Systema::get_renderer(), texturaImage, &camera, &posicao);
//}

void Mapa::set_visible(bool visivel) {
    visible = visivel;
}

bool Mapa::get_visible() {
    return visible;
}

//Mapa::~Mapa() {
//    SDL_DestroyTexture(texturaImage);
//    SDL_FreeSurface(imagem);
//}

// GPU_Rect Mapa::getRect() {

// }
