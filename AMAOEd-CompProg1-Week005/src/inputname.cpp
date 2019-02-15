#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;



int main()
{
    char name[100];
    char address[100];
    char password[100];

    cout << "Enter Your Name: ";
    cin.getline(name, sizeof(name));
    cout << "\nEnter address: ";
    cin.getline(address, sizeof(address));
    cout << "\nEnter password: ";
    cin.getline(password, sizeof(password));
    cout <<"\nHi I am " << name;
    cout << "\nI live at "<< address;
    cout << "\npassword: "<< password << endl;
    _pause();
    return EXIT_SUCCESS;
}