#pragma once

#include <stdint.h>
struct Pixel
{
    uint8_t R {};
    uint8_t G {};
    uint8_t B {};
};
class FrameBuffer
{
private:
    int buffer_size;
    Pixel** Pixels;
public:
    void set_pixel(int x, int y, Pixel px);
    void set_size(int buf_size);
    Pixel get_pixel(int x, int y);
    FrameBuffer();
    ~FrameBuffer();
};

