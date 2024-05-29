#include <iostream>
#include "DrawingEngine/DrawingEngine.hpp"

using namespace std;

int main()
{
    DrawingEngine DrwEng;

    cout << DrwEng << endl;

    DrwEng.show();

    cout << "Testrun" << endl;
    return 0;
}