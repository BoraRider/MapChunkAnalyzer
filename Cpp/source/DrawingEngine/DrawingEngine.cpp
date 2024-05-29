#include "DrawingEngine.hpp"

DrawingEngine::DrawingEngine(/* args */)
{
}

DrawingEngine::~DrawingEngine()
{
}

void DrawingEngine::show()
{

}

std::ostream & operator<<(std::ostream& os, const DrawingEngine& buffer)
{
    os << "47";
    return os;
}