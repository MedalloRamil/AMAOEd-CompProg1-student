// #include<iostream>
// using namespace std;
 
// int main()
// {
//     int fib1 = 1, fib2 = 1, fib3 = 1;
 
//     cout << "The Fibonacci Series is follows : " << endl << fib1 << ", " << fib2 << ", ";
//     while (fib1 + fib2 < 56)
//     {
//         fib3 = fib1 + fib2;
//         fib1 = fib2;
//         fib2 = fib3;
//         cout << fib3 << ", ";
//     }
//     cout << endl;
 

//     system("pause");
//     return EXIT_SUCCESS;
// }







#include<iostream> 

using namespace std;

void fib(int n) { 
   int f[n];   
   int i; 
   f[0] = 1; 
   f[1] = 1 ; 
   for (i = 2; i < n; i++) { 
      f[i] = f[i-1] + f[i-2]; 
   } 
   for (i = 0; i < n; i++) { 
      cout<<f[i]<<", ";
   }
} 
int main () { 
   int n = 10; 
   fib(n); 
   getchar(); 
   return 0; 
} 










// #include <iostream>

// using namespace std;

// int fib(int n)
// {
//     int a = 1, b = 1;
//     for (int i = 3; i <= n; i++) {
//         int c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }

// int main() {
//   int n;
//   cout << "Enter an integer: ";
//   cin >> n;
//   cout << fib(n) << endl;
//   system("pause");
//   return EXIT_SUCCESS;
// }