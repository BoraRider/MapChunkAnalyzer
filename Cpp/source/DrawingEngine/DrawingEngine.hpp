#ifndef DRAWINGENGINE_HH
#define DRAWINGENGINE_HH

#include <iostream>

class DrawingEngine
{
private:
    
public:
    DrawingEngine();
    ~DrawingEngine();

    void show();
};

std::ostream & operator<<(std::ostream& os, const DrawingEngine& buffer);



#endif