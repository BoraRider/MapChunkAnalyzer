#pragma once

#include <iostream>
#include <stdint.h>
#include "../FrameBuffer/FrameBuffer.hpp"
#include "../Drawable/Drawable.hpp"
 
class DrawingEngine
{
protected:
    FrameBuffer* FrameBuff;
    Drawable *Draw;
public:
    DrawingEngine(const int buf_size);
    virtual ~DrawingEngine();

    virtual void add_drawable_to_framebuffer(Drawable *Dw, const unsigned int pX, const unsigned int pY) = 0;
    virtual void show() const= 0;
};