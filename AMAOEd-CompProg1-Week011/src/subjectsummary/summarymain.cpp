// summarymain.cpp
#include <cstdlib>
#include <iostream>
#include "mathsummary.h"

using namespace std;

int main() {
    Subject comp("Computer Programming 1", "IT0001", 3);
    Math math;

    cout << "Subject Details: " << comp.getSubject() << endl;
    cout << "Subject Details: " << math.getSubject() << endl;

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}