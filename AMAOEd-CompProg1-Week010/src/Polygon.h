#include <string>
#include <sstream>

using namespace std;

class Polygon {
    private:
        string mName, mColor;
        short mSides;

    public:
        Polygon(string name, string color, short sides);
        string getInformation();
};

Polygon::Polygon(string name, string color, short sides){
  mName = name;
  mColor = color;
  mSides = sides;
}

string Polygon::getInformation(){
  ostringstream s;
  s << "Name : " << mName << endl;
  s << "Color: " << mColor << endl;
  s << "Sides: " << mSides << endl;
  return s.str();
}