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
    int get_size() const;
    Pixel get_pixel(int x, int y) const;

    void set_size(int buf_size)
    {
    std::vector<Pixel> tmpPx;
    for(int i=0; i<buf_size; i++) tmpPx.push_back(Pixel{0,0,0});
    for(int i=0; i<buf_size; i++) Pixels.push_back(tmpPx);
    }

    FrameBuffer(int buf_size);
    FrameBuffer(){};
    ~FrameBuffer() = default;
};

bool operator==(const Pixel& lhs, const Pixel& rhs);