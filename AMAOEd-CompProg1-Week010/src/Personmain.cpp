#include <cstdlib>
#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
  Person pip("Ramil Medallo", "Dasmarinas cavite", "Male", 48, "Software Developer");

  cout << "--------Personal Details--------- \n" << endl << pip.getInformation() << endl;

  cout << endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}