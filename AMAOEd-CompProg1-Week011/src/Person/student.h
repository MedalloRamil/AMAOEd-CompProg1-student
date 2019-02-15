#ifndef _STUDENT
#define _STUDENT

#include <string>
#include "Person.h"

using namespace std;

class Student : public Person {
    private:
        string mAcademic, mUniversity, mYear;
        
    public:
        Student(string, string, int, string, string, string, string);
        string getAcademic();
        string getUniversity();
        string getYear();
};
Student::Student(string gender, string address, int age, string accupation, 
        string mAcademic, string mUniversity, string mYear)
: Person("Medallo, Ramil", gender, address, age, accupation) {
    this->mAcademic = mAcademic;
    this->mUniversity = mUniversity;
    this->mYear = mYear;
}

string Student::getAcademic() {
    return this->mAcademic;
}

string Student::getUniversity() {
    return this->mUniversity;
}

string Student::getYear() {
    return this->mYear;
}
#endif