#include <string>
#include <sstream>

using namespace std;

class Person {
    private:
        string mName, mAddress, mGender, mOccupation;
        short mAge;

    public:
        Person(string name, string address, string gender, short age, string occupation);
        string getInformation();
};

Person::Person(string name, string address, string gender, short age, string occupation){
  mName = name;
  mAddress = address;
  mGender = gender;
  mAge = age;
  mOccupation = occupation;
}

string Person::getInformation(){
  ostringstream s;
  s << "Name      : " << mName << endl;
  s << "Address   : " << mAddress << endl;
  s << "Gender    : " << mGender << endl;
  s << "Age       : " << mAge << endl;
  s << "Occupation: " << mOccupation << endl;

  return s.str();
}