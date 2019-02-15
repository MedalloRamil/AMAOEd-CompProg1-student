#ifndef _EMPLOYEE
#define _EMPLOYEE

#include <iostream>
#include <sstream>
#include <cstdlib>

#include "payslip.h"

using namespace std;

string padLR(string, char, long);

class Employee {
    private:
        const string nl = "\n", tab = "\t";
    public:
        void main();          
};

void Employee::main(){
    Payslip slip;
    long mainwidth = 81;


    //input
    string name;
    double salary, ot;
    cout << tab << padLR("",'-', mainwidth) << nl;
    cout << tab << padLR("     P A Y S L I P   I N Q U I R Y    ",'-', mainwidth) << nl;
    cout << tab << padLR("",'-', mainwidth) << nl;


    cout  << tab << "Enter employee name        : ";
    getline(cin, name);
    slip.setEmployeeName(name);

    do{
        cout << tab << "Enter Basic Salary     : ";
        cin >> salary;
        }while(salary<10000);

    do{
        cout << tab << "Enter number of hours    : ";
        cin >> ot;
        }while(ot < 1);
    
    cout << tab << padLR("",'-', mainwidth) << nl;
    
    //others
    //output
    //width of the half page
    long subwidth = mainwidth / 2;

    cout << tab << padLR(" PAYSLIP SUMMARY",'-', mainwidth) << nl;
    cout << tab << padLR("Employee Name     : ", slip.getEmployeeName(), subwidth);

}
string padLR(string title, char filler, long wlen){
    long padLen = (wlen - title.length())/2;
    string padChars(padLen,filler);
    long resultLen;

    ostringstream ss;
    ss << padChars << title << padChars;
    resultLen = ss.str().length();
    if(resultLen != wlen) cout << filler;
    return ss.str();
}

#endif
