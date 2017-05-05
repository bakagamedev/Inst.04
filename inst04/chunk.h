#pragma once
#include "types.h"
#include "camera.h"

class Tile
{
    //?
};

class Chunk
{
private:
    Tile tile[13];
public:
    void setTile(uint8_t index,Tile type);
    Tile getTile(uint8_t index);

    void Draw();
};

void Chunk::setTile(uint8_t index,Tile type)
{
    tile[index] = type;
}
Tile Chunk::getTile(uint8_t index)
{
    return tile[index];
}
