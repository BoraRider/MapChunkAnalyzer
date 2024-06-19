#pragma once

#include <iostream>
#include "DrawingEngine.hpp" 


class DrawingEngineTerminal : public DrawingEngine
{
private:
    
public:
    DrawingEngineTerminal(const int buf_s);
    ~DrawingEngineTerminal() override = default ;

    void add_drawable_to_framebuffer(Drawable* Dw) override;
    void update_framebuffer();
    void show() const override;
};

std::ostream& operator<<(std::ostream& os, const Pixel& obj);