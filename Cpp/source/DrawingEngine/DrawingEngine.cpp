#include "DrawingEngine.hpp"

DrawingEngine::DrawingEngine(const int buf_size)
{
    FrameBuff = new FrameBuffer(buf_size);
}

DrawingEngine::~DrawingEngine()
{
    delete FrameBuff;
}