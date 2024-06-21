#pragma once

#include <iostream>
#include "DrawingEngine.hpp"
#include <memory>

constexpr char GreyToAscii[] = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,\"^`'.  ";

class DrawingEngineTerminal : public DrawingEngine
{
private:
    
public:
    DrawingEngineTerminal(const int buf_s);
    ~DrawingEngineTerminal() override = default ;

    void add_drawable_to_framebuffer(std::shared_ptr<Drawable> Dw) override;
    void update_framebuffer();
    void show() const override;
};

std::ostream& operator<<(std::ostream& os, const Pixel& obj);