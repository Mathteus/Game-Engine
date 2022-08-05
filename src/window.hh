//#ifndef WINDOW_HH
//#define WINDOW_HH

//#include <iostream>
//#include <cstdio>

//#include <SDL2/SDL.h>
//#include <SDL2/SDL_timer.h>

//#include "textura.hh"

//typedef void (*Running)(void);

//class Window {
//private:
//    GPU_Target* janela;
//    Uint32 render_flags;
//    SDL_Rect camera;
//    int frameCount, startTime, dt;
//    static bool running;
//    enum TELA {NONE=0, NORMAL, FULL, OPENGL, VULKAN, METAL};

//public:
//    ~Window();

//public:
//    void init(const char* name, const int width, const int height, Uint32 fullscrean);
//    void setFullscreen(bool is_fullscreen);
//    // template<typename Object> bool move(Object obj);
//    template <typename Object> void conectCameraObject(Object obj);
//    void setWidthCamera(uint16_t width);
//    void setHeightCamera(uint16_t height);
//    void loop(Running funcao);
//    GPU_Target* getjanela();
//    template <typename Object> void drawObject(Object obj, Textura texture);
////    int getFps();
//    static bool getRunning();
//    static void stopGame();
//    void update();
//    void render();
//    int delta();
//};

//#endif
