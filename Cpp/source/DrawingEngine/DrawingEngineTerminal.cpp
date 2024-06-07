#include "DrawingEngineTerminal.hpp"

DrawingEngineTerminal::DrawingEngineTerminal(/* args */)
{
}

DrawingEngineTerminal::~DrawingEngineTerminal()
{
}

void DrawingEngineTerminal::show() const
{
    for(int i = 0; i < BUFFER_SIZE; i++)
    {
        for(int j = 0; j < BUFFER_SIZE; j++)
        {
            std::cout << static_cast<int>(FrameBuffer[i][j].R);
        }
        std::cout << std::endl;
    }
}