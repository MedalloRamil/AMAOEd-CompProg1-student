#ifndef _PERSON
#define _PERSON

#include <string>

using namespace std;

class Person {
    private:
        string mName, mAddress, mGender, mOccupation;
        int mAge;

    public:
        Person(string, string, string, int, string);
        string getName();
        string getAddress();
        string getGender();
        string getOccupation();
        int getAge();
};
Person::Person(string name, string address, string gender, int age, 
         string occupation) {
  this->mName = name;
  this->mAddress = address;
  this->mGender = gender;
  this->mAge = age;
  this->mOccupation = occupation;
}

string Person::getName(){
  return this->mName;
}

string Person::getAddress(){
  return this->mAddress;
}

string Person::getGender(){
  return this->mGender;
}

int Person::getAge(){
  return this->mAge;
}

string Person::getOccupation(){
  return this->mOccupation;
}

#endif