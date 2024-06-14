#pragma once

class Drawable
{
public:
    virtual void add_drawable(Drawable Drw);
    virtual Drawable get_drawable();

    Drawable() = default;
    virtual ~Drawable() = default;
};