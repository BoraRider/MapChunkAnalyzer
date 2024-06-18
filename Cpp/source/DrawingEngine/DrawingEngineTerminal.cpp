#include "DrawingEngineTerminal.hpp"

DrawingEngineTerminal::DrawingEngineTerminal(int buf_s) : DrawingEngine(buf_s)
{
}

void DrawingEngineTerminal::show() const
{
    for(int y = 0; y < FrameBuff->get_size(); y++)
    {
        for(int x=0; x<FrameBuff->get_size(); x++)
        {
            Pixel px = FrameBuff->get_pixel(x, y);
            std::cout << " " << px;
        }
        std::cout << "\n";
    }
}

std::ostream& operator<<(std::ostream& os, const Pixel& obj)
{
    if(obj == Pixel{0,0,0})
    {
        os << ". ";
    }
    else if(obj == Pixel{127,127,127})
    {
        os << "# ";
    }
    else
    {
        os << static_cast<int>(obj.R) << "," << static_cast<int>(obj.G) << "," << static_cast<int>(obj.B);
    }
    return os;
}

void DrawingEngineTerminal::add_drawable_to_framebuffer(Drawable Dw, unsigned int pX, unsigned int pY)
{

}