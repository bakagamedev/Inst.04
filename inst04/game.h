#pragma once
#include "pokitto.h"
#include "camera.h"
#include "world.h"
#include "EntityHandler.h"

class Game
{
private:
    Pokitto::Core *core;

    Camera camera;
    WorldHandler world = WorldHandler(*core,camera);
    EntityHandler entity = EntityHandler(*core,camera,world);
public:
    Game(Pokitto::Core &core);
    void Draw();
};

Game::Game(Pokitto::Core &core)
{
    this->core = &core;
}

void Game::Draw()
{
    world.Draw();
}
