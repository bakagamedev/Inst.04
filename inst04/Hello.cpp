#include "pokitto.h"
#include "game.h"
Pokitto::Core core;
Game game = Game(core);

int main () {
    core.begin();

    while (core.isRunning()) {
        if (core.update()) {
            game.Draw();
        }
    }

    return 1;
}
