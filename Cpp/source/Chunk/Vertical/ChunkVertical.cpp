#include "ChunkVertical.hpp"

ChunkVertical::ChunkVertical()
{   
    for(int i = 0; i < CHUNK_SIZE; i++)
    {
        pixel[i][0] = {0,0,0};
        pixel[i][1] = {127,127,127};
        pixel[i][2] = {0,0,0};
    }
}

 Pixel Drawable::get_pixels()
 {

 }