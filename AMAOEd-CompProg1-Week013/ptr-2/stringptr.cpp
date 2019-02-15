#include <iostream>
#include <cstdlib>

using namespace std;

void say(string *b) {
  *b = "This is it!";
}

int main() {
  string a;

  say(&a);
  cout << a << endl;
  
  system("PAUSE");
  return EXIT_SUCCESS;
}