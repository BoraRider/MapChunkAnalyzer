#pragma once
#include "Drawable.hpp"

#define CHUNK_SIZE 3

class ChunkVertical : public Drawable
{
private:
    
public:
    ChunkVertical();
    ~ChunkVertical(){};

    FrameBuffer get_pixels() override;
};