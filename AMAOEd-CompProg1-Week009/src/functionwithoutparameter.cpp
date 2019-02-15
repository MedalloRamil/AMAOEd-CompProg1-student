#include <cstdlib>
#include <iostream>

using namespace std;

int getFaveNumber() {
    return 777;
}

int main() {

    int n = getFaveNumber();

    cout << "My favorite number is: " << n << endl;

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}