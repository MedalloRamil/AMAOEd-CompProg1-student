#ifndef _EMPLOYEE
#define _EMPLOYEE

#include <string>
#include <iostream>
#include <cstdlib>
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

    string employee_name;
    double basic_salary;
    float overtime_hours;

    cout << "Enter employee name    : ";
    getline(cin,employee_name);
    slip.setName(employee_name);

    cout << "Enter Basic salary     : ";
    cin >> basic_salary;
    slip.setBasic_salary(basic_salary);



// this for validation of salary
    do{
        if(basic_salary < 10000){
        }while(basic_salary < 10000){
            cout << "Minimum salary 10000 only." << endl;
            cout << "Enter Basic salary     : ";
            cin >> basic_salary;
            slip.setBasic_salary(basic_salary);
        }continue;
    }while(false);

    cout << "Enter no. of OT hours  : ";
    cin >> overtime_hours;
    slip.setOvertime_hours(overtime_hours);
// this for validation of no. overtime hours
    do{
        if(overtime_hours < 1){
            cout << "Minimum overtime is 1 hour." << endl;
            cout << "Enter no. of OT hours  : ";
            cin >> overtime_hours;
            slip.setOvertime_hours(overtime_hours);
        }continue;
    }while(overtime_hours < 1);
// this is the output structure
    cout << endl;
    cout << endl;
    cout << "Employee Name    : " << slip.getName() << endl;
    cout << "Basic Salary     : Php " << fM(slip.getBasic_salary()) << endl;
    cout << "Pay Grade        : " << slip.getPay_grade() << endl;
    cout << "No. of OT Hours  : " << slip.getOvertime_hours() << endl;
    cout << "OT Pay           : Php " << fM(slip.getOvertime_pay()) << endl;
    cout << "Gross Pay        : Php " << fM(slip.getGross_pay()) << endl;
    cout << "Withholding Tax  : Php " << fM(slip.getWithholdingtax()) << endl;
    cout << "Net Pay          : Php " << fM(slip.getNet_pay()) << endl;
}

// this for currency money format
template<typename T>struct Len2: public numpunct<T>{
    virtual string do_grouping() const {return "\003";}
};

string fM(double a){
    ostringstream ss;
    ss.imbue(locale(ss.getloc(), new Len2<char>));
    ss << fixed << setprecision(2) << a;
    return ss.str();
}
#endif