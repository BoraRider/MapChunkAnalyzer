#include <iostream>
#include "DrawingEngine/DrawingEngineTerminal.hpp"

using namespace std;

int main()
{
    DrawingEngineTerminal DrwEng(8);

    DrwEng.show();

    cout << endl << "Testrun" << endl;
    return 0;
}