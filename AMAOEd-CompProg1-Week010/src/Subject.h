#ifndef _SUBJECT
#define _SUBJECT
// We have named aour class as Subject.h to
// incidcate that this file is a header file
// with the class name being Subject
// Now let us write the template for classes...

#include <string>

using namespace std;

class Subject {
    // We want to limit the access to our properties
    // To do so, we declare them as private;
    private:
        string mSubjectTitle;
        string mCourseNumber;
        int mSubjectId;
    // Now we want to access the public method of our class..
    public:
        Subject(string, string, int);
        string getSubjectTitle();
        string getCourseNumber();
        int getSubjectId();
        // Notice we did not yet include the body of out method
        // this is for readability purpose, we will define the
        // body outside of our class....      
};

Subject::Subject(string title, string course, int id) {
    // we used the class name followed by a double colon
    // then the method name.

    // Since this is the constructor, let us initialize
    // the properties.
    this->mSubjectTitle = title;
    this->mCourseNumber = course;
    this->mSubjectId = id;
}

// Let us create our accessors
string Subject::getSubjectTitle() {
    return this->mSubjectTitle;
}

string Subject::getCourseNumber() {
    return this->mCourseNumber;
}

int Subject::getSubjectId() {
    return this->mSubjectId;
}
// we did this to limit the change of our properties
// we will never allow the properties to be reassinged
// after we initialize our class..

// now to enssure that we have only use our declaration of our class.
// we add directives...

#endif