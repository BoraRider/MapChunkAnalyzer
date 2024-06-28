#pragma once
#include "FrameBuffer.hpp"
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
    std::vector<std::shared_ptr<const Drawable>> drawables{};
public:
    void add_drawable(std::shared_ptr<Drawable> Drw);
    const std::vector<std::shared_ptr<const Drawable>> & get_drawable() const;
    virtual const FrameBuffer & get_pixels() const = 0;
    GridPos get_position() const;
    void set_position(int x, int y);

    Drawable() = default;
    virtual ~Drawable() = default;
};