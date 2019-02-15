#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
    switch (number){
        case 0:
            cout << "Hello World";
            break;
        case 1:
            cout << "I am good";
            break;
        case 2:
            cout << "To the Top";
            break;
        case 3:
            cout << "Where is the horizon";
            break;
        case 4:
            cout << "I do not know";
            break;
        default:
            cout << "Yeah, I will";
}
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    
}