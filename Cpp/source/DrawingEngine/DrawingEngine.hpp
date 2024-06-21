#pragma once

#include <iostream>
#include <stdint.h>
#include "../FrameBuffer/FrameBuffer.hpp"
#include "../Drawable/Drawable.hpp"
#include <memory>
 
class DrawingEngine
{
protected:
    FrameBuffer* FrameBuff;
    std::vector<std::shared_ptr<Drawable>> engine_drawables{};
public:
    DrawingEngine(const int buf_size);
    virtual ~DrawingEngine();

    virtual void add_drawable_to_framebuffer(std::shared_ptr<Drawable> Dw) = 0;
    virtual void show() const= 0;
};