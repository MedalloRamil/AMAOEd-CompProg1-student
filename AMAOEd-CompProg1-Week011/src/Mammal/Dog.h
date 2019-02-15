#ifndef _DOG
#define _DOG

#include <string>
#include <sstream>

#include "Mammal.h"

using namespace std;

class Dog : public Mammal {
    private:
        string mName, mFur, mBreed, mRegistered, mSize;
        short mLegs;
        bool mTail;

    public:
        Dog(string, string, short, bool, string, string, string);
        string setmName(string);
        string setmFur(string);
        short getmLegs();
        bool getmTail();
        string getmSize();

    string getMammal() {
      ostringstream s;
      s << "Name       : " << mName << endl;
      s << "Fur        : " << mFur << endl;
      s << "Legs       : " << mLegs << endl;
      s << "Has Tail   : " << mTail << endl;
      s << "Breed      : " << mBreed<< endl;
      s << "Size       : " << mSize << endl;
      s << "Registered : " << mRegistered << endl;
      return s.str();
    }            
};

Dog::Dog(string name, string fur, short legs, bool hasTail, string breed, 
         string registered, string size) 
: Mammal("Cliford", fur, legs, hasTail) {
    this->mName = name;
    this->mFur = fur;
    this->mLegs = legs;
    this->mTail = hasTail;
    this->mBreed = breed;
    this->mRegistered = registered;
    this->mSize = size;
}

string Dog::setmName(string name){
    this->mName = name;
}

string Dog::setmFur(string fur) {
    this->mFur = fur;
}

short Dog::getmLegs() {
    return this->mLegs;
}

bool Dog::getmTail() {
    return this->mTail;
}

#endif