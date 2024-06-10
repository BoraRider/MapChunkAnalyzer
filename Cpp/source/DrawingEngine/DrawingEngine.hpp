#pragma once

#include <iostream>
#include <stdint.h>
#include "FrameBuffer/FrameBuffer.hpp"

class DrawingEngine
{
protected:
    int FrameBufferSize;
    FrameBuffer FrameBuff;
public:
    DrawingEngine(int buf_size);
    virtual ~DrawingEngine();

    virtual void show() const= 0;
};