#include "DrawingEngineTerminal.hpp"

DrawingEngineTerminal::DrawingEngineTerminal(const int buf_s) : DrawingEngine(buf_s)
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
    for(int i = 0; i < FrameBuff->get_size()+2; i++)
    {
        std::cout << "==";
    }
    std::cout << "\n";
    for(int y = 0; y < FrameBuff->get_size(); y++)
    {
        std::cout << "||";
        for(int x=0; x<FrameBuff->get_size(); x++)
        {
            Pixel px = FrameBuff->get_pixel(x, y);
            std::cout << " " << px;
        }
        std::cout << "||\n";
    }
    for(int i = 0; i < FrameBuff->get_size()+2; i++)
    {
        std::cout << "==";
    }
    std::cout << "\n";
}
//  Take 0.30Red + 0.59Green + 0.11Blue
std::ostream& operator<<(std::ostream& os, const Pixel& obj)
{
    int gray_color = 0.3*obj.R + 0.59*obj.G + 0.11*obj.B;

    int char_index = gray_color * 69/255;
    char_index = 69-char_index;

    os << GreyToAscii[char_index];
    return os;
}

void DrawingEngineTerminal::add_drawable_to_framebuffer(std::unique_ptr<Drawable> Dw)
{
    engine_drawables.push_back(Dw);
}