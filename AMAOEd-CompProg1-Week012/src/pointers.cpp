#include <iostream>

using namespace std;

void pause(){
    cout << endl;
    cout << "Press any key to continue ....";
    cin.get();
}

int main()
{
    int a = 900;
    cout << "The value of a is " << a << endl;
    cout << "The address of a is " << &a << endl;

    pause();
    return 0;
    
}