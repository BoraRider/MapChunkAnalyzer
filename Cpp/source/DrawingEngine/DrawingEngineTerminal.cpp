#include "DrawingEngineTerminal.hpp"

DrawingEngineTerminal::DrawingEngineTerminal(const int buf_s) : DrawingEngine(buf_s)
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
    else if(obj == Pixel{10,10,10})
    {
        os << "* ";
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

void DrawingEngineTerminal::add_drawable_to_framebuffer(std::vector<Drawable*> Dw)
{
    FrameBuffer figure = Dw[0]->get_pixels();
    GridPos position = Dw[0]->get_position();

    std::cout<<figure.get_size()<<std::endl;

    for(int y=0; y < figure.get_size(); y++)
    {
        for(int x=0; x < figure.get_size(); x++)
        {
            FrameBuff->set_pixel(position.posX + x, position.posY+ y, figure.get_pixel(x, y) );
        }
    }
}