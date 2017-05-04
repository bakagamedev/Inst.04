#pragma once
#include "types.h"
class Camera
{
private:
    Point position;
public:
    Point getPosition();

    int16_t GetX()  {   return position.x;  }
    int16_t GetY()  {   return position.y;  }
    void setPosition(Point position)
    {
        this->position = position;
    }
    void setPosition(int16_t x,int16_t y)
    {
        this->position.x = x;
        this->position.y = y;
    }
};
