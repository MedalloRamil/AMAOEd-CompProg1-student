#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int n[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter number[" << i + 1 << "]: ";
        cin >> n[i];
    }
    cout << endl;

    cout << "The entered numbers are: " << n[0] << ", ";
    cout << n[1] << ", " << n[2] << ", " << n[3] << ", ";

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
