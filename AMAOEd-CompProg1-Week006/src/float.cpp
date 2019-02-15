#include <iostream>

using namespace std;

int main() {
    float num1;
    float num2;
    float num3;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    num3 = num1 / num2;
    cout << "The quotient is: " << num3 << endl;

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS; 
}