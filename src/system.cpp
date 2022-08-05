#include "system.hh"

Engine::Memory<SDL_Renderer> System::render;

System::System() : running(true) {
    SDL_SetMainReady();

    try {
        if (SDL_Init(SDL_INIT_EVERYTHING)) {
            std::cerr << "Erro ao iniciar SDL2: " << SDL_GetError() << "\n";
        }

        if (!IMG_Init(IMG_INIT_EVERYTHING)) {
            std::cerr << "Erro ao inicar Image: " << IMG_GetError() << "\n";
        }

        if (!Mix_Init(MIX_INIT_EVERYTHING)) {
            std::cerr << "Erro ao iniciar Mixer: " << Mix_GetError() << "\n";
        }

        if (!Mix_OpenAudio(444100, MUS_OGG, 2, 2048)) {
            std::cerr << "Erro ao abrir audio: " << Mix_GetError() << "\n";
        }

        if (!TTF_Init()) {
            std::cerr << "erro ao iniciar TTF: " << TTF_GetError() << "\n";
         }

        janela = SDL_CreateWindow("Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_RESIZABLE);
        render = SDL_CreateRenderer(janela.get(), -1, SDL_RENDERER_ACCELERATED);

        inputs.register_keyboard_action("exit", SDL_SCANCODE_ESCAPE, [&](){ running = false; });
    } catch(std::exception& e) {
        std::cout << "ERROR: " << e.what() << "\n";
    }
}

SDL_Renderer* System::renderer() {
    return render.get();
}

SDL_Texture* System::create_texture(SDL_Surface** surface) {
    SDL_Texture* texture = SDL_CreateTextureFromSurface(render.get(), *surface);
    SDL_FreeSurface(*surface);
    return texture;
}

Time System::get_time() {
    return tm;
}

bool System::is_running() {
    return this->running;
}

System::~System() {
    Mix_CloseAudio();
    IMG_Quit();
    Mix_Quit();
    TTF_Quit();
    SDL_Quit();
}

