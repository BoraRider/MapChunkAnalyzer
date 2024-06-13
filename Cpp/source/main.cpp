#include <iostream>
#include "DrawingEngine/DrawingEngineTerminal.hpp"

using namespace std;

int main()
{
    DrawingEngineTerminal DrwEng(8);

    try
    {
        DrwEng.show();
    }
    catch (std::invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }

    cout << endl << "Testrun state: completed" << endl;
    return 0;
}