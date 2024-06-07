#include "DrawingEngine.hpp"

DrawingEngine::DrawingEngine(/* args */)
{
    for(int i=0; i<BUFFER_SIZE; i++)
    {
        for(int j=0; j<BUFFER_SIZE; j++)
        {
            FrameBuffer[i][j].R = 8;
            FrameBuffer[i][j].G = 8;
            FrameBuffer[i][j].B = 8;
        }
    }
}

DrawingEngine::~DrawingEngine()
{
}