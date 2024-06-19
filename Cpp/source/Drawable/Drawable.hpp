#pragma once
#include "../FrameBuffer/FrameBuffer.hpp"
#include <vector>

struct GridPos
{
    int posX;
    int posY;
};

class Drawable
{
protected:
    GridPos position;
    FrameBuffer frame;
    std::vector<Drawable*> drawables{};
public:
    void add_drawable(Drawable *Drw);
    std::vector<Drawable*> get_drawable();
    virtual FrameBuffer get_pixels() = 0;
    GridPos get_position() {return position;}
    void set_position(int x, int y);

    Drawable() = default;
    virtual ~Drawable() = default;
};