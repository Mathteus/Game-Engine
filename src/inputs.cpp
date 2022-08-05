#include "inputs.hh"

void Inputs::register_keyboard_action(const std::string &name, SDL_Keycode key, std::function<void(void)> action) {
    teclados.push_back({name, key, action});
}

void Inputs::register_mouse_action(const std::string &name, SDL_Keycode button, std::function<void(void)> action) {
    teclados.push_back({name, button, action});
}

void Inputs::register_joystick_action(const std::string &name, SDL_GameControllerButton button, std::function<void(void)> action) {
    joys.push_back({name, button, action});
}

bool Inputs::is_action_pressed(const std::string &name) {
    return a_active[name];
}

bool Inputs::is_action_released(const std::string &name) {
    return !a_active[name];
}

void Inputs::event_handler() {
    while(SDL_PollEvent(&event)) {
        SDL_GetMouseState(&mouse.x, &mouse.y);

        switch (event.type) {
            case SDL_QUIT:
                teclados[0].action();
            break;

            case SDL_CONTROLLERBUTTONDOWN:
                for (auto x : joys) {
                    if (x.key == event.cbutton.button) {
                        a_active[x.name] = true;
                        x.action();
                    }
                }

                break;

            case SDL_CONTROLLERBUTTONUP:
                for (auto x : joys) {
                    if (x.key == event.cbutton.button) {
                        a_active[x.name] = false;
                        x.action();
                    }
                }

                break;

            case SDL_KEYDOWN:
                for (auto x : teclados) {
                    if (x.key == event.key.keysym.scancode) {
                        a_active[x.name] = false;
                        x.action();
                    }
                }

                break;

            case SDL_KEYUP:
                for (auto x : teclados) {
                    if (x.key == event.key.keysym.scancode) {
                        a_active[x.name] = false;
                        x.action();
                    }
                }

                break;

            case SDL_MOUSEBUTTONDOWN:
                for (auto x : teclados) {
                    if (x.key == event.key.keysym.scancode) {
                        a_active[x.name] = true;
                        x.action();
                    }
                }

                break;

            case SDL_MOUSEBUTTONUP:
                for (auto x : teclados) {
                    if (x.key == event.key.keysym.scancode) {
                        a_active[x.name] = false;
                        x.action();
                    }
                }

                break;

            default : break;
        }
    }
}
