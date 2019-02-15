#include <iostream>

using namespace std;

void pause(){
  cout << endl;
  cout << "Press any key to continue .....";
  cin.get();
}

int main() {
  float a;
  float& b = a;
  cout << "The value of a is: " << a << endl;
  cout << "The address of a is: " << &a << endl;
  cout << endl;

  cout << "The value of b is: " << b << endl;
  cout << "The address of b is: " << &b << endl;

  pause();
  return EXIT_SUCCESS;
}