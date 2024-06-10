#include "DrawingEngineTerminal.hpp"

DrawingEngineTerminal::DrawingEngineTerminal(int buf_s) : DrawingEngine(buf_s)
{
}

void DrawingEngineTerminal::show() const
{
    for(int i = 0; i < buffer_size; i++)
    {
        for(int j=0; j<buffer_size; j++)
        {
            std::cout << " " << static_cast<int>(FrameBuffer[i][j].R);
        }
        std::cout << "\n";
    }
}