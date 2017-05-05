#pragma once
#include "pokitto.h"
#include "ardutils\Collections.h"
#include "types.h"

class Entity
{
private:
    uint8_t type;   //Fix later
    Point16 position = Point16();
public:
    Entity(void)    {}
    Entity(Point16 position)
    {
        this->position = position;
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
