#pragma once
#include "types.h"
#include "world.h"

class World;

class Camera
{
private:
    Point16 position;
    World *world;
public:

    void SetWorld(World &world)
    {
        this->world = &world;
    }

    Point16 getPosition()
    {
        return position;
    }
    int16_t GetX()  {   return position.x;  }
    int16_t GetY()  {   return position.y;  }
    void setPosition(Point16 position)
    {
        this->position = position;
    }
    void setPosition(int16_t x,int16_t y)
    {
        this->position.x = x;
        this->position.y = y;
    }
};
