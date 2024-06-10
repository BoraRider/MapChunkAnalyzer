#include "DrawingEngine.hpp"

DrawingEngine::DrawingEngine(int buf_size)
{
    FrameBuff.set_size(buf_size);
    FrameBufferSize = buf_size;
}

DrawingEngine::~DrawingEngine()
{
}