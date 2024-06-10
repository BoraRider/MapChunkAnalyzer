#include "DrawingEngineTerminal.hpp"

DrawingEngineTerminal::DrawingEngineTerminal(int buf_s) : DrawingEngine(buf_s)
{
}

void DrawingEngineTerminal::show() const
{
    for(int y = 0; y < FrameBufferSize; y++)
    {
        for(int x=0; x<FrameBufferSize; x++)
        {
            Pixel px = FrameBuff.get_pixel(x, y);
            std::cout << " " << px;
        }
        std::cout << "\n";
    }
}