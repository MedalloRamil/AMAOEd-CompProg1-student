// summary.h
#include <string>
#include <sstream>

using namespace std;

// define a subject class.
class Subject { 
    private: 
        string mTitle, mCode; // fields
        short mUnits;         // fields

// constructor
    public: 
        Subject(string title, string code, short units) {
            mTitle = title;
            mCode = code;
            mUnits = units;
        }
        // getSubject function.
        string getSubject() { 
            ostringstream s;
            s << "[" << mCode << "]" << mTitle;
            s << " (" << mUnits << " units)";
            return s.str();
        }
};