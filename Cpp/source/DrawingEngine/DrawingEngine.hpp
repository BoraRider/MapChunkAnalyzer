#pragma once

#include <iostream>
// #include <cstdint>
#include <stdint.h>
#define BUFFER_SIZE 20
struct Pixel
{
    uint8_t R;
    uint8_t G;
    uint8_t B;
};
class DrawingEngine
{
protected:
    Pixel FrameBuffer[BUFFER_SIZE][BUFFER_SIZE];
public:
    DrawingEngine();
    ~DrawingEngine();

    virtual void show() const= 0;
};