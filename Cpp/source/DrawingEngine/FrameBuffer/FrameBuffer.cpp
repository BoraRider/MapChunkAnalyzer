#include "FrameBuffer.hpp"
#include <bits/stdc++.h> 
#include <stdexcept>

void FrameBuffer::set_size(int buf_size)
{
    std::vector<Pixel> tmpPx;
    
    // create empty temporary array with size of buf_size
    for(int i=0; i<buf_size; i++)
    {
        tmpPx.push_back(Pixel{0,0,0});
    }

    // create finall array with size of (buf_size) x (buf_size)
    for(int i=0; i<buf_size; i++)
    {
        Pixels.push_back(tmpPx);
    }  
}

Pixel FrameBuffer::get_pixel(int x, int y) const
{
    if( (Pixels[0].size() > 0) && (x < Pixels[0].size()) && (y < Pixels[0].size()) )
    {
        return Pixels[y][x];
    }
    throw std::invalid_argument("\n X, Y coordinate or size of array is invalid! \n");

}

void FrameBuffer::set_pixel(int x, int y, Pixel px)
{
    Pixels[y][x] = px;
}

int FrameBuffer::get_size() const
{
    return static_cast<int>(Pixels[0].size());
}