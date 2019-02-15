#include <string>
#include <sstream>

using namespace std;

class Mammal {
  private:
    string mName, mFur;
    short mLegs;
    bool mTail;

  public:
    Mammal(string name, string fur, short legs, bool hasTail) {
      mName = name;
      mFur = fur;
      mLegs = legs;
      mTail = hasTail;
    }

    string getMammal() {
      ostringstream s;
      s << "Name    : " << mName << endl;
      s << "Fur     : " << mFur << endl;
      s << "Legs    : " << mLegs << endl;
      s << "Has Tail: " << mTail << endl;
      return s.str();
    }
};