#include <cstdlib>
#include "system.hh"
#include "fonte.hh"
#include "texto.hh"
#include <cstdio>


#define BLACK 0,0,0,0
#define WHITE 255,255,255,0
#define RED 255,0,0,0
#define GREEN 0,255,0,0
#define BLUE 0,0,255,0

int main(int argc, char** argv) {
    printf("PRE START ENGINEn\n\\n");

    System game;

    printf("\n\nPOS START ENGINE\n\n");

    game.get_time().init_time(60);

    u16 x{120}, y{120};
    Text texto("/media/henrique/A/cpp/simple-game/COMICATE.TTF", "tsesa", 24, x, y);

    game.inputs.register_keyboard_action("t1", SDL_SCANCODE_W, [&](){ y -= 2; });
    game.inputs.register_keyboard_action("t2", SDL_SCANCODE_S, [&](){ y += 2; });
    game.inputs.register_keyboard_action("t3", SDL_SCANCODE_A, [&](){ x -= 2; });
    game.inputs.register_keyboard_action("t4", SDL_SCANCODE_D, [&](){ x += 2; });

    printf("\n\nALL CONFIGSn\n\n");
    bool change = true;

    while (game.is_running()) {
        game.get_time().time_update();
        game.inputs.event_handler();

        texto.write(std::to_string(game.get_time().get_delta()));
        texto.set_x(x);
        texto.set_y(y);
//        texto.
        if (change == true) {
            SDL_SetRenderDrawColor(System::renderer(), BLACK);
            SDL_RenderClear(System::renderer());
            texto.draw();
            SDL_RenderPresent(System::renderer());
        }


        game.get_time().time_update_late();
    }

    return EXIT_SUCCESS;
}
