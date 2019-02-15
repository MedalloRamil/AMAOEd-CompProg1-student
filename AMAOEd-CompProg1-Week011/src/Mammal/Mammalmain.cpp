#include <string>
#include <cstdlib>
#include <iostream>
#include "Mammal.h"
#include "Dog.h"

using namespace std;

int main()
{
  Mammal animal("Marmot", "belly hair", 4, true);
  Dog dog("Clifford", "thick hair", 4, true, "German sheperd", "registered", "Large");
  

  cout << "--------Mammal Details---------\n" << endl << animal.getMammal() << endl;
  cout << "--------Dog Details---------\n" << endl << dog.getMammal();
  
  cout << endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}