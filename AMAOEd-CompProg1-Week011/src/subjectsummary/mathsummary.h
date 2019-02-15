#include <string>
#include "summary.h"

using namespace std;

class Math : public Subject {
    public:
        Math() : Subject("Mahtematics", "CA5001", 5){ }
        string getSubject(){
            return Subject::getSubject();
        }
};