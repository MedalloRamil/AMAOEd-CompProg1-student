#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//ask the user to input a value
//then display the output back to the user


int main()
{

    float dailybudget;

    cout << "Enter daily budget: ";
    cin>> dailybudget;
    cout << "\n";
    _pause();
    cout <<"\n\n" << dailybudget << "\n\n";

    _pause();
    return EXIT_SUCCESS;
}