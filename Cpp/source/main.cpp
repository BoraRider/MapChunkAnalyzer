#include <iostream>
#include "DrawingEngine/DrawingEngineTerminal.hpp"
#include "Drawable/Drawable.hpp"
#include "Chunk/Vertical/ChunkVertical.hpp"

using namespace std;

int main()
{
    DrawingEngineTerminal DrwEng(10);
    Drawable* Drwbl = new ChunkVertical;
    Drwbl->set_position(9,9);
    vector<Drawable*> Drawing;
    Drawing.push_back( Drwbl);

    DrwEng.add_drawable_to_framebuffer(Drawing);


    try
    {
        DrwEng.show();
    }
    catch (std::invalid_argument& e)
    {
        cerr << e.what() << endl;
        delete Drwbl;
        return -1;
    }

    cout << endl << "Testrun state: completed" << endl;
    delete Drwbl;
    return 0;
}