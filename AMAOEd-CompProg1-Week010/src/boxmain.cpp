// boxmain.cpp
#include <cstdlib>
#include <iostream>
#include "box.h"

using namespace std;

int main() {
    Box box(2, 3, 4);
    cout << "The volume of our box is ";
    cout << box.getVolume() << "." << endl;

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}