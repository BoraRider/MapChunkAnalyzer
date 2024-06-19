#include "Drawable.hpp"


void Drawable::add_drawable(Drawable *Drw)
{
    drawables.push_back(Drw);
}
std::vector<Drawable*> Drawable::get_drawable()
{
    return drawables;
}
void Drawable::set_position(unsigned int x, unsigned int y)
{
    position.posX = x;
    position.posY = y;
}