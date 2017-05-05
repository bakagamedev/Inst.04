#pragma once
#include "ardutils\Collections.h"
#include "entity.h"
#include "camera.h"
#include "chunk.h"

class Camera;   //had to forward declare for whatever reason

class World
{
private:
    Pokitto::Core *core;
    Camera camera;

	Entity player = Entity();

    void DrawWorld();
	void DrawStuff();
public:

	Ardutils::List<Point16,8> LevelStart;
	Ardutils::List<Entity,12> EntityList;
	Ardutils::List<Chunk,10> ChunkList;

    World(Pokitto::Core &core,Camera camera);

    uint16_t height;

    void Draw();
};

World::World(Pokitto::Core &core,Camera camera)
{
    this->core = &core;
    this->camera = camera;

    player.setType(1);
    EntityList.Add(player);
    EntityList.Add(Entity(Point16(32,32)));
}

void World::Draw()
{
    core->display.drawCircle(220/4,176/4,10);
    DrawWorld();
    DrawStuff();
}

void World::DrawWorld()
{
    const auto chunkSize = 16;
    const auto upper = max(0,camera.GetY() / chunkSize);
    const auto lower = min(16, ceil(camera.GetY() + 176/2) / chunkSize);
    //const auto lower = min(ChunkList.GetCount(), ceil(camera.GetY() + 176/2) / chunkSize);

    int16_t offset = -camera.GetY() + (upper * chunkSize);
    for(auto i=upper; i<lower; ++i)
    {
        //Chunk *chunk = &ChunkList[i];
        core->display.drawRect(0,offset,109,chunkSize);
        //chunk->Draw(offset);
        offset += chunkSize;
    }
}

void World::DrawStuff()
{
    const int16_t upper = camera.GetY() - 32;
    const int16_t lower = camera.GetY() + 176 + 32;

    for(auto i=0; i<EntityList.GetCount(); ++i)
    {
        Entity *entity = &EntityList[i];
        if ((entity->GetY() >= upper) && (entity->GetY() < lower))
        {
            core->display.drawCircle(entity->GetY(),entity->GetY() - camera.GetY(),4);
        }
    }
}

