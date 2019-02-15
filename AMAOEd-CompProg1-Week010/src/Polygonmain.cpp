#include <cstdlib>
#include <iostream>
#include "Polygon.h"

using namespace std;

int main()
{
  Polygon shape("Quadrilateral ", "Blue", 4);

  cout << "--------Polygon Details-------- \n" << endl << shape.getInformation() << endl;

  cout << endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}