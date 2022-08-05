//#include "window.hh"

//bool Window::running = true;

//void Window::init(const char* name, const int width, const int height, Uint32 fullscrean) {



//    startTime = SDL_GetTicks();
//    frameCount = 0;
//}

//void Window::setFullscreen(bool is_fullscreen) {
//    GPU_SetFullscreen(is_fullscreen, true);
//}

////int Window::getFps() {
////    return fps;
////}

//void Window::update() {
//   GPU_Clear(janela);
//}

//int32_t Window::delta() {
//    frameCount = SDL_GetTicks();
//    dt = (frameCount - startTime) / 1000.0f;
//    startTime = frameCount;

//    return dt;
//}

//void Window::render() {
////   double frameCount = SDL_GetTicks();
////   double fps = (frameCount - startTime) / 1000.0f;
////   double startTime = frameCount;

//   Uint32 ticks = SDL_GetTicks();
//   if (ticks < (1000.0f / 30)) {
//       SDL_Delay((1000.0f / 30) - ticks);
//   }
//}

//void Window::loop(Running funcao) {
//    update();
//    funcao();
//    render();
//}

//template<typename Object> void Window::drawObject(Object obj, Textura texture) {
//    // GPU_Blit(texture.getImage(), &obj.getPosition(), janela, obj.x(), obj.y());
//    GPU_BlitRectX(texture.getImage(), &obj.getRect(), janela, &obj.getPosition(), obj.getAngle(), 1,  1, obj.is_flipped());
//}

//GPU_Target* Window::getjanela() {
//    return this->janela;
//}

//bool Window::getRunning() {
//    return Window::running;
//}

//void Window::stopGame() {
//    Window::running = false;
//}

//Window::~Window() {
//    GPU_FreeTarget(janela);
//    GPU_Quit();
//}
