//#ifndef GAMEOBJECT_HH
//#define GAMEOBJECT_HH

//#include <string>
//#include <vector>
//#include <functional>
//#include <utility>

//#include "sprites.hh"
//#include "SDL2/SDL_gpu.h"
//#include "SDL2/SDL.h"

//#include "textura.hh"

//class RigidBody {
//public:
//    uint16_t rightX, leftX, upY, downY;

//    RigidBody(uint16_t xpos, uint16_t ypos, uint16_t width, uint16_t height) {
//        rightX = xpos + width; leftX = xpos; upY = ypos; downY = ypos + height;
//        // pos_image.x = image_x; pos_image.y = image_y; pos_image.w = width; pos_image.h = height;
//    }

//    inline bool isCollinding(uint16_t x, uint16_t y) {
//        return (( x >= rightX && x <= leftX ) && ( y >= upY && y <=  downY)) ? true : false;
//    }
//};

//class GameObject {
//private:
//    std::vector<std::pair<RigidBody, std::string>> animates;
//    std::vector<std::pair<std::string, std::function<void(void)>>> listerner;
//    SDL_Point rotation;
//    uint8_t atual;
//    bool visible, flipped;
//    double angle;
//    SDL_RendererFlip flip;
//    GPU_Rect posicao;
//    GPU_Rect animacao;

//public:
//    ~GameObject();
//    void init(uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint16_t xframes, uint16_t yframes, uint16_t image_x, uint16_t image_y, std::string descr);
//    void add_animate(uint16_t width, uint16_t height,  uint16_t xframes, uint16_t yframes, uint16_t image_x, uint16_t image_y, std::string descr);
//    // void swap_animate(std::string descr);
//    void set_visible(bool visivel);
//	void set_flipped(bool flipped);
//    bool is_animate();
//    bool is_visible();
//    SDL_RendererFlip is_flipped();
//    // void render(GPU_Target* janela, GPU_Image* image);
//	// void mover(int direction);
//    void addEvent(std::string name, std::function<void(void)> action);
//    void removeEvent(std::string name);
//    GPU_Rect* getPosition();
//    GPU_Rect* getRect();
//    void setPosition(int x, int y);
//    RigidBody getBody();
//    SDL_Point getRotation();
//    double getAngle();
//    void loop();
//    void loop(std::string acao);
//    void setTexture(Textura texture);
//};

//#endif

