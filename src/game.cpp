// #include "game.h"

// void Game::init(int width, int height) {
//     // if (tela.init(width, height)) std::cout << "ERRO AO INICIAR O SDL_GPU !!!\n";
//     // std::cout << "SDl_GPU inicado com sucesso !!!\n";
//     // comandos.addKeyToAction(SDL_QUIT, SDL_SCANCODE_ESCAPE, [&](){ running = false; });

//     running = true;

//     janela = GPU_Init(width, height, GPU_DEFAULT_INIT_FLAGS);
//     if (janela == nullptr) {
//         std::cout << "erro ao iniciar sdl_gpu !!!\n";
//         return;
//     }

//     std::cout << "sdl_gpu iniciado com sucesso !!\n";
//     GPU_SetDebugLevel(GPU_DEBUG_LEVEL_MAX);
// }

// void run() {
//     std::cout << "Game Running...\n";
//     std::this_thread::sleep_for(1s);
// }

// void Game::loop() {
//     while(running) {
//         // comandos.loop();
//         // tela.loop(&run);


//         while(SDL_PollEvent(&event)) {
//             if(event.type == SDL_QUIT) running = false;
//             else if(event.type == SDL_KEYDOWN) {
//                 if(event.key.keysym.sym == SDLK_ESCAPE) running = false;
//             }
//         }

//         GPU_Clear(janela);
        
//         run();

//         GPU_Flip(janela);   
//     }
// }

// Game::~Game() {
//     GPU_Quit();
// }
