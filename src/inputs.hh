#ifndef INPUTS_HH
#define INPUTS_HH

#include "math.hh"

#include <SDL2/SDL.h>
#include <unordered_map>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <functional>

class Inputs {
private:
    typedef struct {
        std::string name;
        SDL_Keycode key;
        std::function<void(void)> action;
    } keyboard;

    typedef struct {
      std::string name;
      SDL_GameControllerButton key;
      std::function<void(void)> action;
    } joystick;

    std::vector<keyboard> teclados;
    std::vector<joystick> joys;
    std::unordered_map<std::string, bool> a_active;
    SDL_Event event;

public:
    //Inputs();
    void register_keyboard_action(const std::string &name, SDL_Keycode key, std::function<void(void)> action);
    void register_mouse_action(const std::string &name, SDL_Keycode button, std::function<void(void)> action);
    void register_joystick_action(const std::string &name, SDL_GameControllerButton button, std::function<void(void)> action);

    bool is_action_pressed(const std::string &name);
    bool is_action_released(const std::string &name);

    void event_handler();

    SDL_Rect mouse;
};

#endif //INPUTS_HH



//SDL_GameControllerButton
