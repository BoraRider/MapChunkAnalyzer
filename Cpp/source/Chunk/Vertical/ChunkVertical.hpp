#pragma once
#include "Drawable.hpp"

#define CHUNK_SIZE 3

class ChunkVertical : public Drawable
{
private:
    Pixel pixel[3][3];
public:
    ChunkVertical();
    ~ChunkVertical();

    Pixel get_pixels() override;
};