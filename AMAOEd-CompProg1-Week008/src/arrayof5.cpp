//  Write a program that will accept five (5) integers and display them to 
// the users. You are limited to using only two (2) variables (including the array).

// technical work
//1. To askk the user to enter 5 integers
//limit to 2 variable only includding array

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n[5];

    for (int i = 0; i < 5; i++){
        cout << "Enter a number [" << i + 1 << "]:";
        cin >> n[i];
    }
    cout << endl;
    cout << "This are the numbers: " << n[0] << ", ";
    cout << n[1] << ", " << n[2] << ", " << n[3] << ", ";
    cout << n[4] << ", ";

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}