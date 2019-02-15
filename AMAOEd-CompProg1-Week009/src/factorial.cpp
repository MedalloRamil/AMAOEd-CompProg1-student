// MainFactorial.cc
// Program to calculate factorial of a number

#include <iostream>
using namespace std;

int main()
{
   int i, number=0, factorial=1;

// User input must be an integer number between 1 and 10
   while(number<1 || number>10)
   {
     cout << "Enter integer number (1-10) = ";
     cin >> number;
   }

// Calculate the factorial with a FOR loop
   for(i=1; i<=number; i++)
   {
      factorial = factorial*i;
   }

// Output result
   cout << "Factorial = " << factorial << endl;
   return 0;
}
