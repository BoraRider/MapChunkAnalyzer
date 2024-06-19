#include "DrawingEngineTerminal.hpp"

DrawingEngineTerminal::DrawingEngineTerminal(const int buf_s) : DrawingEngine(buf_s)
{
}
void showtime()
{


}

void DrawingEngineTerminal::update_framebuffer()
{
    int drawables_left = engine_drawables.size() - 1;
    FrameBuffer figure;
    GridPos position;

    FrameBuff->clean_framebuffer();

    while(drawables_left >= 0)
    {
        figure = engine_drawables[drawables_left]->get_pixels();
        position = engine_drawables[drawables_left]->get_position();

        for(int y=0; y < figure.get_size(); y++)
        {
            for(int x=0; x < figure.get_size(); x++)
            {
                if( (position.posX + x < FrameBuff->get_size()) && (position.posY + y < FrameBuff->get_size()) && (position.posX + x >= 0) && (position.posY + y >= 0) )
                {
                    FrameBuff->set_pixel(position.posX + x, position.posY+ y, figure.get_pixel(x, y) );
                }
            }
        }
        drawables_left--;
    }
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

void DrawingEngineTerminal::add_drawable_to_framebuffer(Drawable* Dw)
{
    engine_drawables.push_back(Dw);
}