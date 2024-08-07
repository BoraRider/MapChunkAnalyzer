#include <iostream>
#include <memory>

#include "DrawingEngineTerminal.hpp"
#include "Drawable.hpp"
#include "ChunkVertical.hpp"

using namespace std;

int main()
{
    DrawingEngineTerminal DrwEng(10);

    vector<shared_ptr<Drawable>> Drwbl;

    for(int i=0; i<5 ;i++)
    {
        Drwbl.push_back(shared_ptr<Drawable>(new ChunkVertical));
    }

    Drwbl[0]->set_position(4,4);
    Drwbl[1]->set_position(-1,-1);
    Drwbl[2]->set_position(8,-1);
    Drwbl[3]->set_position(-1,8);
    Drwbl[4]->set_position(8,8);

    for(int i=0; i<5 ;i++)
    {
        DrwEng.add_drawable_to_framebuffer(Drwbl[i]);
    }

    DrwEng.update_framebuffer();


    try
    {
        DrwEng.show();
    }
    catch (std::invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }


    Drwbl[0]->set_position(0,4);
    DrwEng.update_framebuffer();
    DrwEng.show();

    cout << endl << "Testrun state: completed" << endl;

    return 0;
}