#pragma once
#include "pokitto.h"
#include "world.h"
#include "camera.h"
#include "EntityHandler.h"

class Game
{
private:
    Pokitto::Core *core;

    Camera camera;
    World world = World(*core,camera);

    void DummyWorld();
public:
    Game(Pokitto::Core &core);
    void Draw();
};

Game::Game(Pokitto::Core &core)
{
    this->core = &core;
    camera.SetWorld(world);

    DummyWorld();   //Test map!
}

void Game::DummyWorld()
{
    world.height = 1280;

    world.LevelStart.Add(Point16(200,120));
}

void Game::Draw()
{
    world.Draw();

}
