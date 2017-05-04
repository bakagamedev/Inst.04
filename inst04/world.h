#pragma once
#include "pokitto.h"
#include "types.h"
#include "camera.h"

#define TileSize 16

class WorldHandler
{
private:
    Pokitto::Core *core;
    Camera *camera;

public:
    WorldHandler(Pokitto::Core &core,Camera &camera);
    void Draw();
};

WorldHandler::WorldHandler(Pokitto::Core &core,Camera &camera)
{
    this->core = &core;
    this->camera = &camera;
}

void WorldHandler::Draw()
{
    int16_t first = max(0,   floor(camera->GetY() / TileSize));
    int16_t last  = min(1024,ceil((camera->GetY() + 88) / TileSize))+1;

    for(auto i=first; i<last; ++i)
    {
        auto pos = (i * TileSize)-camera->GetY();
        core->display.drawRect(3,pos,103,TileSize-1);
    }
}
