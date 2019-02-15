#include <cstdlib>
#include <iostream>

using namespace std;

// declare the function use.
int qoutient(int value1, int value2) {
    return value1 / value2; 
}

int main() {

    // declare a variable for storing the input user and the result.
    int result1;
    int result2;
    int result3;
    int a, b, c, d, e, f;
    
    // ask the user to input data.
        cout << "Enter a non-zero integer: ";
        cin >> a;
        cout << "Enter a non-zero integer: ";
        cin >> b;
        cout << "Enter a non-zero integer: ";
        cin >> c;
        cout << "Enter a non-zero integer: ";
        cin >> d;
        cout << "Enter a non-zero integer: ";
        cin >> e;
        cout << "Enter a non-zero integer: ";
        cin >>f;
     
// Display the user output
    cout << endl;
    result1 = qoutient(a, b);
    result2 = qoutient(c, d);
    result3 = qoutient(e, f);
    cout << "quotient is: " << result1 << endl;;
    cout << "quotient is: " << result2 << endl;
    cout << "quotient is: " << result3 << endl;
    
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}