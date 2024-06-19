#pragma once

#include <iostream>
#include <stdint.h>
#include "../FrameBuffer/FrameBuffer.hpp"
#include "../Drawable/Drawable.hpp"
 
class DrawingEngine
{
protected:
    FrameBuffer* FrameBuff;
public:
    DrawingEngine(const int buf_size);
    virtual ~DrawingEngine();

    virtual void add_drawable_to_framebuffer(std::vector<Drawable*> Dw) = 0;
    virtual void show() const= 0;
};