#ifndef _EMPLOYEE
#define _EMPLOYEE

#include <string>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iomanip>

#include "payslip.h"

using namespace std;

string fM(double);

class Employee {
    public:
        void main();
};

void Employee::main(){
      Payslip slip;
  
    string Employee_name;
    double basic_salary;
    float Overtime_hours;

    cout << "Enter employee name    : ";
    getline(cin, Employee_name);
    slip.setName(Employee_name);

    cout << "Enter Basic salary     : ";
    cin >> basic_salary;
    slip.setBasic_salary(basic_salary);

    //this will validate the salary Minimum input.
    do{
        if (basic_salary < 10000){
        }while(basic_salary < 10000){
            cout << "Minimum salary, 10000 only" << endl;
            cout << "Enter Basic salary     : ";
            cin >> basic_salary;
            slip.setBasic_salary(basic_salary);
        }continue;
    }while(false);
   
    
    cout << "Enter No. Of OT hours  : ";
    cin >> Overtime_hours;
    slip.setOvertime_hours(Overtime_hours);

// this will validate the OT hours to the limit.
    do{
        if (Overtime_hours > 1 || Overtime_hours < 1){
        }while(Overtime_hours > 1 || Overtime_hours < 1){
            cout << "Minimum Overtime, 1 hours only" << endl;
            cout << "Enter No. Of OT hours  : ";
            cin >> Overtime_hours;
            slip.setOvertime_hours(Overtime_hours);
        }continue;
        
    }while(false);
    
    cout << endl;
    cout << "Employee Name     : "  << slip.getName() << endl;
    cout << "Basic Salary      : Php " << fM(slip.getBasic_salary()) << endl;
    cout << "No. of OT hours   : " << slip.getOvertime_hours() << endl;
    cout << "Pay Grade         : " << slip.getPay_grade() << endl;
    cout << "Overtime Pay      : Php " << fM(slip.getOvertime_pay()) << endl;
    cout << "Gross Pay         : Php " << fM(slip.getGross_pay()) << endl;
    cout << "Withholding Tax   : Php " << fM(slip.getWithholdingtax()) << endl;
    cout << "Net Pay           : Php " << fM(slip.getNet_pay()) << endl;

}
// This will format the decimal point of the currency.
template<typename T>struct Len2 : public numpunct<T>{
    virtual string do_grouping() const {return "\003";}
};
string fM(double a){
    ostringstream ss;
    ss.imbue(locale(ss.getloc(),new Len2<char>));
    ss << fixed << setprecision(2) << a;
    return ss.str();
}

#endif