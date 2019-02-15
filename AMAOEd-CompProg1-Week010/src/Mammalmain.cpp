#include <cstdlib>
#include <iostream>
#include "Mammal.h"

using namespace std;

int main()
{
  Mammal animal("Marmot", "belly hair", 4, true);

  cout << "--------Mammal Details---------\n" << endl << animal.getMammal() << endl;

  cout << endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}