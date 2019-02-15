//2. Write a program using FOR statement that displays a right triangle
 // using asterisks where the height is at the right corner of the application.The height will depend on the user input.

// #include <cstdlib>
// #include <cstring>
// #include <iostream>

// using namespace std;

// int main()
// {
// 	int height;

// 	cout<<"Enter a number: ";

// 	cin >> height;

// 	for (int a = 1; a <= height; a++) {
		
// 		for (int b = 1; b <= a; b++) {
// 			cout<< "*";
// 		}

// 		cout<<endl;
// 	}

//     cout << endl;
//     system("PAUSE");
// 	return EXIT_SUCCESS;
// }




#include <cstdlib>
#include <cstring>
#include <iostream> 

using namespace std;
   
int main() {  
    int i;
	int j; 
	int height;  
   
    cout << "Enter height: ";
    cin >> height; 
   
    for(i = 1; i <= height; i++){  
        for(j = 1; j <= height; j++){
            if(j <= height-i){
                cout << " "; 
            } else {
                cout << "*"; 
       }
        }
        cout << endl;  
    }  
	
	cout << endl;
	system("PAUSE");
 return EXIT_SUCCESS;  
} 








// **************************************************************
// *              INVERTED TRIANGLE                             *
// **************************************************************

// #include <cstdlib>
// #include <cstring>
// #include <iostream>

// using namespace std;

// int main()
// {
// 	int height;

//     cout << "Enter height: ";
//     cin >> height;
//     for (int x = 1; x <= height; x++){
//         for (int y = 1; y <= x; y++){
//             cout << "*";
//             for (;height >= 1; height--){
//                 for (y = 1; y < height; y++){
//                     cout << "*";
//                 }
//                 cout << endl;

//             }

//         }
//         cout << endl;
//     }

//     cout << endl;
//     system("PAUSE");
// 	return EXIT_SUCCESS;
// }





// *********************************************************
// *                        TRIANGLE                       *
// *********************************************************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int space, rows;

//     cout <<"Enter number of rows: ";
//     cin >> rows;

//     for(int i = 1, k = 0; i <= rows; ++i, k = 0)
//     {
//         for(space = 1; space <= rows-i; ++space)
//         {
//             cout <<"  ";
//         }

//         while(k != 2*i-1)
//         {
//             cout << "* ";
//             ++k;
//         }
//         cout << endl;
//     }    
//     return 0;
// }