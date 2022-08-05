#ifndef TIME_HH
#define TIME_HH

#include <SDL2/SDL.h>

class Time {
private:
    float delta;
    float now;
    float last;
    float frame_last;
    float frame_delay;
    float frame_time;
    float frame_rate;
    float frame_count;

public:
    Time() : delta(0), now(0), last(0), frame_last(0), frame_time(0), frame_count(0),frame_delay(0), frame_rate(0) {}

    void init_time(float fps) {
        frame_rate = fps;
        frame_delay = 1000.f / frame_rate;
    }

    void time_update() {
        now = (float) SDL_GetTicks();
        delta = (now - last) / 1000.f;
        last = now;
        ++frame_count;

        if (now - last > 1000.f) {
            frame_rate = frame_count;
            frame_count = 0;
            last = now;
        }
    }

    float get_delta() {
        return this->delta;
    }

    void time_update_late() {
        frame_time = (float) SDL_GetTicks() - now;

        if (frame_delay > frame_time) {
            SDL_Delay(frame_delay - frame_time);
        }
    }
};

#endif // TIME_HH
