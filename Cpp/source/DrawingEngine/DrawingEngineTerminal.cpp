#include "DrawingEngineTerminal.hpp"
#include <algorithm>

constexpr char GreyToAscii[] = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,\"^`'.  ";

DrawingEngineTerminal::DrawingEngineTerminal(const int buf_s) : DrawingEngine(buf_s)
{
}

void DrawingEngineTerminal::update_framebuffer()
{

    FrameBuff->clean_framebuffer();

    for(auto & engine_drawable : engine_drawables)
    {
        const FrameBuffer & figure = engine_drawable->get_pixels();
        const GridPos & position = engine_drawable->get_position();
        // auto it = find(engine_drawables.begin(), engine_drawables.end(), engine_drawable); 
        // std::cout << it-engine_drawables.begin()  << std::endl;

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

void DrawingEngineTerminal::add_drawable_to_framebuffer(std::shared_ptr<Drawable> Dw)
{
    engine_drawables.push_back(Dw);
}