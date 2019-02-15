//3. Write a program that will ascendingly sort six (6) 
// integers from the user. Use only four (4) variables (including the array).

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int n[6];

    // Get user input
    for (int i = 0; i < 6; i++) {
        cout << "Enter number[" << i + 1 << "]: ";
        cin >> n[i];
    }
    cout << endl;
    // Sort
    for (int i = 0; i < 6; i++) {
        for (int t = i; t < 6; t++) {
            if (n[i] > n[t]) {
                int temp = n[i];
                n[i] = n[t];
                n[t] = temp;
            }
        }

    }
    // Display back to the user
    cout << "The sorted numbers are: " << n[0] << ", ";
    cout << n[1] << ", " << n[2] << ", " << n[3] << ", ";
    cout << n[4] << ", " << n[5] << ", ";

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}