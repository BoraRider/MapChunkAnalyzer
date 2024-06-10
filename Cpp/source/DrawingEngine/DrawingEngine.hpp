#pragma once

#include <iostream>
#include <stdint.h>
struct Pixel
{
    uint8_t R {};
    uint8_t G {};
    uint8_t B {};
};
class DrawingEngine
{
protected:
    int buffer_size;
    Pixel** FrameBuffer;
public:
    DrawingEngine(int buf_size);
    virtual ~DrawingEngine();

    virtual void show() const= 0;
};