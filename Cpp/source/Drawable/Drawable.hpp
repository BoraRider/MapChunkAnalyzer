#pragma once
#include "../FrameBuffer/FrameBuffer.hpp"

class Drawable
{
protected:
    unsigned int posX;
    unsigned int posY;
public:
    virtual void add_drawable(Drawable Drw);
    virtual Drawable get_drawable();

    Drawable() = default;
    virtual ~Drawable() = default;
};