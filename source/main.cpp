#include "main.h"


#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#include "main.h"
int main() {
#else
int SDL_main(int argc, char** argv) {
#endif
    game g = game::create();

#ifdef __EMSCRIPTEN__
    emscripten_set_main_loop_arg(game_loop, static_cast<void*>(&g), -1, true);
#else
    while (true) {
        g.loop();
    }
#endif
}
