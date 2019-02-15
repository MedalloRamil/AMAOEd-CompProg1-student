#include <cstdlib>
#include <iostream>
#include "Person.h"
#include "student.h"

using namespace std;

int main() {

  Person info("Ramil Medallo", "Dasmarinas cavite", "Male", 48, "Developer");
  Student student("Male", "Dasmarinas cavite Sn. Agustin II", 48, "Developer", 
                    "Math/CompProg-1/Calculus", "AMAOEd", "1st year");

  cout << "----------Person Details-------------"  << endl;
  cout << endl;
  cout << "Name      : " << info.getName() << endl;
  cout << "Address   : " << info.getAddress() << endl;
  cout << "Gender    : " << info.getGender() << endl;
  cout << "Age       : " << info.getAge() << endl;
  cout << "Occupation: " << info.getOccupation() << endl;
  cout << endl;
  cout << "----------Student Details-------------"  << endl;
  cout << endl;
  cout << "University        : " << student.getUniversity() << endl;
  cout << "Student Name      : " << student.getName() << endl;
  cout << "Address           : " << student.getAddress() << endl;
  cout << "Gender            : " << student.getGender() << endl;
  cout << "Age               : " << student.getAge() << endl;
  cout << "Academic          : " << student.getAcademic() << endl;
  cout << "Year              : " << student.getYear() << endl;
  cout << "Occupation        : " << student.getOccupation() << endl;

  cout << endl;
  system("pause");
  return EXIT_SUCCESS;
}