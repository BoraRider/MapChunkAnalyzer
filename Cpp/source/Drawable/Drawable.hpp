#pragma once
#include "../FrameBuffer/FrameBuffer.hpp"

class Drawable
{
protected:
    unsigned int posX;
    unsigned int posY;
public:
    virtual void add_drawable(Drawable *Drw);
    virtual Drawable* get_drawable() =0;
    virtual Pixel get_pixels() = 0;

    Drawable() = default;
    virtual ~Drawable() = default;
};