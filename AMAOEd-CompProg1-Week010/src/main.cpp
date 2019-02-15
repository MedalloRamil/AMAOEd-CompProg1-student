// Now that we are done with our Subject class, let us finish our main function...

#include <cstdlib>
#include <iostream>
#include <string>
#include "Subject.h" // w cll our class

using namespace std;

int main() {
    Subject math("Math", "M112", 1); // we declared and initialized our class..
    // this is called instantiation...

    // Now let us leverage our class by calling its method...
    cout << "Subject title: " << math.getSubjectTitle() << endl;
    cout << "Course Number: " << math.getCourseNumber() << endl;
    cout << "Subject Id: " << math.getSubjectId() << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
