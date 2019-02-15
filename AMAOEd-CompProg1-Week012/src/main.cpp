// For this week, we will explore pointers and reference.

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void add10(int n) {
    n = n + 10;
}

int main() {
    // we start with normal variables
    int a = 10;
    cout << "The value of a is " << a << endl;
    // We get the value of 10 as expected. Now let us create a function
    // That will increament our value by 10
    add10(a);
    cout << "The value of a is " << a << endl;
    // What?! The value did not change...
    // This is because the change is limited to the function and stays within the function

    // This is where pointers and refernces come into play.
    int *b = &a; // we declare a poin ter "b" with the address of our variable "a"
    cout << "The address of b is " << b << endl;
    cout << " The value pointed by b is " << *b << endl;
    // Notice that the value of "b" is address of "a",
    // To prove this, we can display the addressof "b"
    cout << "The address of b is " << &b << endl;
    // The address of "a" and "b" is different, yet their value is the same.

    // if we change "a", "b" should change as well
    a = 20;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << *b << endl;

    // If we change "b", "a" should follow
    *b = 30;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << *b << endl;

    // There you go, 

    system("PAUSE");
    return EXIT_SUCCESS;
}