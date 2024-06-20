#include "ChunkVertical.hpp"

namespace
{
    constexpr int CHUNK_SIZE = 3;
}

ChunkVertical::ChunkVertical()
{   
    frame.set_size(CHUNK_SIZE);
    for(int i = 0; i < CHUNK_SIZE; i++)
    {
        frame.set_pixel(i, 0, Pixel{10,10,10});
        frame.set_pixel(i, 1, Pixel{127,127,127});
        frame.set_pixel(i, 2, Pixel{10,10,10});
    }
    position.posX = 0;
    position.posY = 0;
}

FrameBuffer ChunkVertical::get_pixels() const
{
    return frame;
}