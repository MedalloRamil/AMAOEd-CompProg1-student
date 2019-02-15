#include <iostream>

using namespace std;

void pause() {
    cout << endl;
    cout <<"Press any key to continue ....";
    cin.get();
}

int main()
{
    char a[10];
    char *b;
    
    // this will display the range of char a.
    for (int i = 0; i < 10 ; i++) {
        cout << "The value of a is a[" << i << "] = " << a[i] << endl;
    }
    // this will 
    cout << endl;
    for (int i = 0; i < 10 ; i++) {
        cout << "The address of a is &a[" << i << "] = " << (void*)&a[i] << endl;
    }

    cout << endl;
    b = a;
    for (int i = 0; i < 10; i++) {
        cout << "The pointers b is[" << i << "] = " << (void*)b + i<< endl;
    }

    pause();
    return 0;
}