#include <iostream>
#include "DrawingEngine/DrawingEngineTerminal.hpp"
#include "Drawable/Drawable.hpp"
#include "Chunk/Vertical/ChunkVertical.hpp"

using namespace std;

int main()
{
    DrawingEngineTerminal DrwEng(10);
    Drawable* Drwbl1 = new ChunkVertical;
    Drawable* Drwbl2 = new ChunkVertical;
    Drawable* Drwbl3 = new ChunkVertical;
    Drawable* Drwbl4 = new ChunkVertical;
    Drawable* Drwbl5 = new ChunkVertical;

    Drwbl1->set_position(-1,-1);
    Drwbl2->set_position(8,-1);
    Drwbl3->set_position(-1,8);
    Drwbl4->set_position(8,8);
    Drwbl5->set_position(4,4);

    DrwEng.add_drawable_to_framebuffer(Drwbl1);
    DrwEng.add_drawable_to_framebuffer(Drwbl2);
    DrwEng.add_drawable_to_framebuffer(Drwbl3);
    DrwEng.add_drawable_to_framebuffer(Drwbl4);
    DrwEng.add_drawable_to_framebuffer(Drwbl5);
    DrwEng.update_framebuffer();


    try
    {
        DrwEng.show();
    }
    catch (std::invalid_argument& e)
    {
        cerr << e.what() << endl;
        delete Drwbl1;
        return -1;
    }
std::cout<<std::endl;
    Drwbl5->set_position(0,4);
    DrwEng.update_framebuffer();
    DrwEng.show();

    cout << endl << "Testrun state: completed" << endl;
    delete Drwbl1;
    delete Drwbl2;
    delete Drwbl3;
    delete Drwbl4;
    delete Drwbl5;
    return 0;
}