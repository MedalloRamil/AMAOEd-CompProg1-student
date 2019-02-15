// Write a program that will display an equilateral triangle
// with a height depending on the user. 
// The minimum height is 1, the maximum height is 10.
// Use an array to display the specific character on the specific row. 
// The array will be: { 0 := “A”, 1:= “B”, 2 := “C”, 3 := “D”,
// 4 := “E”, 5 := “F”, 6 := “G”, 7 := “H”, 8 := “I”, 9 := “J” }. 
// You are limited to four (4) variables only (including the array).

// technical work:
//1. To ask user to enter a height.
//2. The minimum height = 1, maximum height = 10.
//3. limited to 4 variables only including the array.

// #include <cstdlib>
// #include <iostream>

// using namespace std;

// int main() {
//     int height;

//     cout << "Enter height: ";
//     cin >> height;

//     char myarray[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

//     if (height > 10){
//         cout << "Oops your off the limit";
//     }else{
//         for (int i = 0; i <= height; i++){
//             for (int y = height - i; y > 0; y--){
//                 cout << myarray[i] << " ";
//             }
//             cout << endl;
            
//         }
        
//     }

//     system("PAUSE");
//     return EXIT_SUCCESS;
// }



#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int height;

    cout <<"Enter heights: ";
    cin >> height;

    char space[11] = {' ' ,'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    if (height > 10){
        cout << "Oops your off the limits";
    }else{
        for(int i = 1, k = 0; i <= height; ++i, k = 0){
            for(space[0] = 0; space[0] <= height-i; ++space[0]){
                cout <<"  ";
            }while(k != 2*i-1){
                cout << space[i] << " ";
                ++k;
            }
            cout << endl;
        } 
    }   
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS; 
}