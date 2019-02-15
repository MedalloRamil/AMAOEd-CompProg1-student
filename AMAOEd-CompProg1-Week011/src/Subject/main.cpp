// To start, let us create  aMath class that inherits the Subject class..

// now we recreate our template....

#include <cstdlib>
#include <iostream>
#include <string>

// we add our header files
#include "Subject.h"
#include "MathSubject.h"

using namespace std;

int main() {
    Subject math("Mathematics", "M115", 1);
    MathSubject mathsubject("M115", 1, 50);

    cout << "FOR SUBJECT: " << endl;
    cout << "* Subject Title * " << math.getSubjectTitle() << endl;
    cout << "* Course Number * " << math.getCourseNumber() << endl;
    cout << "* Subject ID *" << math.getSubjectId() << endl;
    cout << endl; // for clarity

    // we now call our MathSubject instance
    cout << "FOR SUBJECT: " << endl; // since our MAthSubject extends Subject class
                                    // we can use the methods of Subject class
                                    // from the MathSubject object
    cout << "* Subject Title *" << mathsubject.getSubjectTitle() << endl;
    cout << "* Course Number *" << mathsubject.getCourseNumber() << endl;
    cout << "* Subject ID *" << mathsubject.getSubjectId() << endl;
    // And since we added another method for mathsubject, we can call that one as well...
    cout << "* Number of Students: *" << mathsubject.getNumberStudents() << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}