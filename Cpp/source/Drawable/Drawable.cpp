#include "Drawable.hpp"


void Drawable::add_drawable(std::shared_ptr<Drawable> Drw)
{
    drawables.push_back(Drw);
}
std::vector<std::shared_ptr<Drawable>> Drawable::get_drawable()
{
    return drawables;
}
void Drawable::set_position(int x, int y)
{
    position.posX = x;
    position.posY = y;
}