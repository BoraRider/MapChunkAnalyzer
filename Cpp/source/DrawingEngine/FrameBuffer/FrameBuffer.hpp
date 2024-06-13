#pragma once

#include <stdint.h>
#include <vector>
struct Pixel
{
    uint8_t R {};
    uint8_t G {};
    uint8_t B {};
};
class FrameBuffer
{
private:
    std::vector<std::vector<Pixel>> Pixels;
public:
    void set_pixel(int x, int y, Pixel px);
    void set_size(int buf_size);
    int get_size() const;
    Pixel get_pixel(int x, int y) const;
    FrameBuffer() = default;
    ~FrameBuffer() = default;
};

