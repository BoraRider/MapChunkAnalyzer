#pragma once
#include "../FrameBuffer/FrameBuffer.hpp"
#include <vector>
#include <memory>

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
    std::vector<std::unique_ptr<Drawable>> drawables{};
public:
    void add_drawable(std::unique_ptr<Drawable> Drw);
    std::vector<std::unique_ptr<Drawable>> get_drawable();
    virtual FrameBuffer get_pixels() const = 0;
    GridPos get_position() {return position;}
    void set_position(int x, int y);

    Drawable() = default;
    virtual ~Drawable() = default;
};