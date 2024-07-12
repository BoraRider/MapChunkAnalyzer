#include "Drawable.hpp"


void Drawable::add_drawable(std::shared_ptr<Drawable> Drw)
{
    drawables.push_back(Drw);
}
const std::vector<std::shared_ptr<const Drawable>> & Drawable::get_drawable() const
{
    return drawables;
}
void Drawable::set_position(int x, int y)
{
    position.posX = x;
    position.posY = y;
}

const GridPos & Drawable::get_position() const 
{
    return position;
}