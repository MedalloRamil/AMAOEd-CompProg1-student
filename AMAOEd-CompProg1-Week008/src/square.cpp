#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Enter height 1-10: ";
    cin >> height;

    char myarray[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    if (height > 10){
        cout << "Oops! off the limits";
    }else{
        for (int i =0; i <= height; i++){
            cout << " ";
            for (int s = 0; s <= height; s++){
                cout << myarray[i] << " ";
                }
                cout << endl;
                
            }
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}