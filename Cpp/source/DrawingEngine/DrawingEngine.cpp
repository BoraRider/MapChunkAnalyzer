#include "DrawingEngine.hpp"

DrawingEngine::DrawingEngine(int buf_size)
{
    buffer_size = buf_size;
    FrameBuffer = new Pixel*[buffer_size];

    for(int i=0; i<buffer_size; i++)
    {
        FrameBuffer[i] = new Pixel[buffer_size];
    }

    for(int i=0; i<buffer_size; i++)
    {
        for(int j=0; j<buffer_size; j++)
        {
            FrameBuffer[i][j].R = j;
            FrameBuffer[i][j].G = 8;
            FrameBuffer[i][j].B = 8;
        }
    }
}

DrawingEngine::~DrawingEngine()
{
    for(int i=0; i<buffer_size; i++)
    {
        delete FrameBuffer[i];
    }
    delete[] FrameBuffer;
}