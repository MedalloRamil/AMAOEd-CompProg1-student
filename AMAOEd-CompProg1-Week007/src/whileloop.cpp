#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    int i = 0;

    while (i < 9) {
        cout << i + 1 << ".) Hello World" << endl;
        i = i + 1;
    }

    // *********************************************************
    // Print a new line and ask user for any key before exiting
    // *********************************************************
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}