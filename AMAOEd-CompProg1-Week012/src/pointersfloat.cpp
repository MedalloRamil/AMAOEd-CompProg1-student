#include <iostream>

using namespace std;

void pause() {
    cout << endl;
    cout <<"Press any key to continue ....";
    cin.get();
}

int main()
{
    float a[20];

  // this will display the range of the array a.  
    for (int i = 0; i < 20 ; i++) {
        cout << "The value of a is a [" << i << "] = " << a[i] << endl;
    }
    
    // this will display the address range of the array &a
    cout << endl;
    for (int i = 0; i < 20 ; i++) {
        cout << "The address of &a is [" << i << "] = " << &a[i] << endl;
    }

    // this will display the reference r in the range of array a.
    cout << endl;
    float &r = a[20];
    for (int i = 0; i < 20; i++) {
        cout << "The &r reference pointing to a[20] is[" << i << "] = " << &r  + i << endl;
    }

    pause();
    return 0;
}