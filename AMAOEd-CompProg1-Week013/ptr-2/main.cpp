#include <cstdlib>
#include <string>
#include <iostream>


using namespace std;

void add10(int n) {
    n = n + 123;
}

// In this finction, the parameter is a pointer
void add10New(int *n) {
    *n = *n + 123;
}

int main() {
    // Let us start with declaring a variable
    int a = 929;
    cout << "The value of 'a' is " << a << endl;
    // If we call a function, the change that occurs within stays within the function.
    add10(a);
    cout << "The value of 'a' is " << a << endl;
    // We have added 123 to our value 929, However, the change did not go out of the function
    // to remedy this. we can use pointers and reference...
    // let us rewrite our function

    // let us call the function using reference of our variable
    add10New(&a);
    cout << "The value of 'a' is " << a << endl;
    // If we run this, we expect to use our value change...
    // This is because of the pointers we just defined in the parameters

    // The update went through
    // this because what we passed is not the value of the variable
    // But the variable itself.

    system("PAUSE");
    return EXIT_SUCCESS;
}   