#pragma once
#include "pokitto.h"
#include "types.h"
#include "world.h"
#include "camera.h"

class EntityHandler
{
private:
    Pokitto::Core *core;
    WorldHandler *world;
    Camera *camera;

public:
    EntityHandler(Pokitto::Core &core,Camera &camera,WorldHandler world);
    void Draw();
};

EntityHandler::EntityHandler(Pokitto::Core &core,Camera &camera,WorldHandler world)
{
    this->core = &core;
    this->world = &world;
    this->camera = &camera;
}

void EntityHandler::Draw()
{

}

