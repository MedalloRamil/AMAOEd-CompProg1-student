#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

// ask user to input a string value
//declare a variable to hold the user's input value
//and finally to display the output as instructed.

int main()
{
    string usersection;

    
    cout << "Enter Section: ";
    cin >> usersection;
    _pause();
    cout << "\n\n*** Section: " << usersection << "***\n";
    _pause();
    return EXIT_SUCCESS;
}