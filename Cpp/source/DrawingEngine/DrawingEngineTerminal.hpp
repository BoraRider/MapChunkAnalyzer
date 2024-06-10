#pragma once

#include <iostream>
#include "DrawingEngine.hpp" 


class DrawingEngineTerminal : public DrawingEngine
{
private:
    
public:
    DrawingEngineTerminal(int buf_s);
    ~DrawingEngineTerminal() = default;

    void show() const override;
};

std::ostream& operator<<(std::ostream& os, const Pixel& obj)
{
    os << obj.R << "," << obj.G << "," << obj.B;
    return os;
}