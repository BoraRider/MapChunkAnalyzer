#ifndef DRAWINGENGINE_HH
#define DRAWINGENGINE_HH

#include <iostream>
#define BUFFER_SIZE 20
struct Pixel
{
    int x;
    int y;
    char val;
};
class DrawingEngine
{
private:
    Pixel FrameBuffer[BUFFER_SIZE][BUFFER_SIZE];
public:
    DrawingEngine();
    ~DrawingEngine();

    void show();
};

std::ostream & operator<<(std::ostream& os, const DrawingEngine& buffer);



#endif