#ifndef _MATHSUBJECT
#define _MATHSUBJECT

#include <string>
#include "Subject.h"// we added the subject header file

using namespace std;

class MathSubject : public Subject {  // we inherit the subject class
    private:
        int mNumberStudents;
    public:
        MathSubject(string, int, int);
        int getNumberStudents();
};

// We have created a constructor that will hold the Course Number,
// Subject ID and the Number of Students
MathSubject::MathSubject(string courseNumber, int id, int mStudents)
: Subject("Mathematics", courseNumber, id)
// and placed the value from the constructorof our MathSubject class
{
    // remember we have a constructor for our Subject class... we call that by ..
    // Now we initialize the property.
    this->mNumberStudents = mStudents;
}

// lastly we write the body of our accessor
int MathSubject::getNumberStudents() {
    return this->mNumberStudents;
}

#endif