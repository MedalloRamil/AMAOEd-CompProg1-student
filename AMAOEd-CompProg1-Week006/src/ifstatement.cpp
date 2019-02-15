#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
    if (number == 0) {
        cout << "Hello World";
    } else if (number == 1) {
        cout << "I am Groot";
    } else if (number == 2) {
        cout << "To the Top";
    } else if (number == 3) {
        cout << "Where is the horizon";
    } else if (number == 4) {
        cout << "I do not know";
    } else {
        cout << "Yeah, I will.";
    }
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
