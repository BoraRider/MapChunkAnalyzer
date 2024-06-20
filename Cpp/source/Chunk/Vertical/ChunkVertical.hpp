#pragma once
#include "Drawable.hpp"

class ChunkVertical : public Drawable
{
private:
    
public:
    ChunkVertical();
    ~ChunkVertical() = default;

    FrameBuffer get_pixels() const override;
};