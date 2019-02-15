#include <cstdlib>
#include <iostream>

using namespace std;

// declare a function
string separateDigit(short digit) {
  return to_string(digit / 10 % 10) + ", " + to_string(digit % 10);
}

int main() {

    short result;
    short a;
    
// ask the user to input data from 10 - 99.
    cout << "Enter a short value from 10-99: ";
    cin >> a;
// this limit the input ask and display the output
    if (a < 10 || a > 99){
        system("PAUSE");
        return EXIT_FAILURE;
    }else{
        cout << endl;
        cout << separateDigit(a);   
    }
    
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}