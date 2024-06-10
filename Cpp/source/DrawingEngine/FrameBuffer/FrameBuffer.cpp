#include "FrameBuffer.hpp"

FrameBuffer::FrameBuffer()
{
    buffer_size = 0;
}

FrameBuffer::~FrameBuffer()
{
    if(buffer_size > 0)
    {
        for(int i=0; i<buffer_size; i++)
        {
            delete Pixels[i];
        }
    delete[] Pixels;
    }
}

void FrameBuffer::set_size(int buf_size)
{
    buffer_size = buf_size;
    Pixels = new Pixel*[buffer_size];

    for(int i=0; i<buffer_size; i++)
    {
        Pixels[i] = new Pixel[buffer_size];
    }

    for(int i=0; i<buffer_size; i++)
    {
        for(int j=0; j<buffer_size; j++)
        {
            Pixels[i][j].R = j;
            Pixels[i][j].G = 0;
            Pixels[i][j].B = 0;
        }
    }
}

Pixel FrameBuffer::get_pixel(int x, int y)
{
    if( (buffer_size > 0) && (x < buffer_size) && (y < buffer_size) )
    {
        return Pixels[y][x];
    }
    return Pixel{0,0,0};
}

void FrameBuffer::set_pixel(int x, int y, Pixel px)
{
    Pixels[y][x] = px;
}