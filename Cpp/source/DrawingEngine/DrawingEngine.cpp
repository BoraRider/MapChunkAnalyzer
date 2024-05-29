#include "DrawingEngine.hpp"

DrawingEngine::DrawingEngine(/* args */)
{
    int j=0;
    for(int i=0; i<BUFFER_SIZE; i++)
    {
        for(j; j<BUFFER_SIZE; j++)
        {
            FrameBuffer[i][j].val = 'o';
            FrameBuffer[i][j].x = j;
        }
        FrameBuffer[i][j].y = i;
    }
}

DrawingEngine::~DrawingEngine()
{
}

void DrawingEngine::show()
{
    for(int i=0; i<<BUFFER_SIZE; i++)
    {
        for(int j=0; j<<BUFFER_SIZE; j++)
        {
            std::cout << FrameBuffer[i][j].val;
        }
        std::cout << std::endl;
    }
}

std::ostream & operator<<(std::ostream& os, const DrawingEngine& buffer)
{
    os << "47";
    return os;
}