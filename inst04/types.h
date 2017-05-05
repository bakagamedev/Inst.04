#pragma once

class Point16
{
public:
    int16_t x,y;

    Point16(void)    {}
    Point16(int16_t x,int16_t y)
    {
        this->x = x;
        this->y = y;
    }
};

enum class Weapon
{
    None,
    HRifle,
    HPistol,
};
