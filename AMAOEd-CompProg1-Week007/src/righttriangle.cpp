// Write a program using WHILE statement that displays a right triangle using asterisks where the 
// height is at the left corner of the application. The height will depend on the user input.

// #include <cstdlib>
// #include <cstring>
// #include <iostream>

// using namespace std;

// int main() {
//     int height;
//     int x = 1;

//     cout << "Enter height: ";
//     cin >> height;

//     while(x <= height){
//         int y = 1;
//         while(y < x){
//             cout << "*";
//             y = y + 1;
//         }
//         cout << "*" << "\n";
//         x = x + 1;
//     }

//     cout << endl;
//     system("PAUSE");
//     return EXIT_SUCCESS;
// }



// #include <cstdlib>
// #include <cstring>
// #include <iostream>

// using namespace std;

// int main(){

//     int height;
    

//     cout << "Enter height: ";
//     cin >> height;

// ***************************************************************
//  *              inverted right triangle                       *
// ***************************************************************    

//     while(height >= 1){
//         int y = 1;
//         while(y <= height){
//             cout << y%10;
//             y++;
//         }
//         cout <<endl;
//         height--;
//     }

//     cout << endl;
//     system("PAUSE");
//     return EXIT_SUCCESS;
// }




#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main(){

    int height;
    int x;
    int y;
    int s;
    
    cout << "Enter height: ";
    cin >> height;
    x = 1;
    while(x <= height){
        y = 1;
        while(y <= x){
            s = 1;
            while(s >= y){
                s--;
            }
            cout << " *";
            y++;
        }
        cout << endl;
        x++;

    }
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}