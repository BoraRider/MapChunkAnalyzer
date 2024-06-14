#pragma once

#include <iostream>
#include <stdint.h>
#include "../FrameBuffer/FrameBuffer.hpp"
#include "../Drawable/Drawable.hpp"

class DrawingEngine
{
protected:
    FrameBuffer* FrameBuff;
    Drawable Draw;
public:
    DrawingEngine(int buf_size);
    virtual ~DrawingEngine();

    virtual void show() const= 0;
};