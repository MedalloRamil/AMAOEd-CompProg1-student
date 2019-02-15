#ifndef _PAYSLIP
#define _PAYSLIP

#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class Payslip {

    private:
        string mName, mPay_grade;
        double mBasic_salary, mOvertime_pay, 
               mGross_pay, mNet_pay, mWithholdingtax, mTaxRate;

        const float SSS = 500, Pagibig = 200, Philhealth = 100,
                    mFixed_value = SSS + Pagibig + Philhealth;

        float mOvertime_hours;

    public:
        string getName();
        string getPay_grade();
        double getBasic_salary();
        float getOvertime_hours();
        double getOvertime_pay();
        double getGross_pay();
        double getNet_pay();
        double getWithholdingtax();
        double setTaxRate();

        void setName(string);
        double setBasic_salary(double);
        float setOvertime_hours(float);
        

};

void Payslip::setName(string name){
    this->mName = name;
}

double Payslip::setBasic_salary(double a){
    this->mBasic_salary = a;
}

float Payslip::setOvertime_hours(float h){
    this->mOvertime_hours = h;
}

 
string Payslip::getName(){
    return this->mName;
}

string Payslip::getPay_grade(){
    if (mBasic_salary >= 10000 && mBasic_salary <= 14000){
        mPay_grade = "A";
    }else if (mBasic_salary >= 15000 && mBasic_salary <= 19000){
        mPay_grade = "B";
    }else if (mBasic_salary >= 20000 && mBasic_salary <= 24000){
        mPay_grade = "A";
    }else if (mBasic_salary >= 25000 && mBasic_salary <= 29000){
        mPay_grade = "B";
    }else if (mBasic_salary >= 30000 && mBasic_salary <= 34000){
        mPay_grade = "A";
    }else if (mBasic_salary >= 35000 && mBasic_salary <= 39000){
        mPay_grade = "B";
    }else if (mBasic_salary >= 40000 && mBasic_salary <= 44000){
        mPay_grade = "A";
    }else if (mBasic_salary >= 45000 && mBasic_salary <= 49000){
        mPay_grade = "B";
    }else if (mBasic_salary >= 50000 && mBasic_salary <= 54000){
        mPay_grade = "A";
    }else if (mBasic_salary >= 55000){
        mPay_grade = "B";
    }
    return this->mPay_grade;
}

double Payslip::getBasic_salary(){
    return this->mBasic_salary;
}

float Payslip::getOvertime_hours(){
    return this->mOvertime_hours;
}

double Payslip::getOvertime_pay(){
    return this->mOvertime_pay = mOvertime_hours * (0.01 * mBasic_salary);
}

double Payslip::getGross_pay(){
    return this->mGross_pay = mBasic_salary + mOvertime_pay;
}

double Payslip::getWithholdingtax(){
    if (mBasic_salary >= 10000 && mBasic_salary <= 15000) {
        mOvertime_pay = mOvertime_hours * (0.01 * mBasic_salary);
        mGross_pay = mBasic_salary + mOvertime_pay;
        mTaxRate = 0.1;
        mWithholdingtax = mGross_pay * mTaxRate;
    }else if (mBasic_salary >= 20000 && mBasic_salary <= 25000) {
        mOvertime_pay = mOvertime_hours * (0.01 * mBasic_salary);
        mGross_pay = mBasic_salary + mOvertime_pay;
        mTaxRate = 0.15;
        mWithholdingtax = mGross_pay * mTaxRate;
    }else if (mBasic_salary >= 30000 && mBasic_salary <= 35000) {
        mOvertime_pay = mOvertime_hours * (0.01 * mBasic_salary);
        mGross_pay = mBasic_salary + mOvertime_pay;
        mTaxRate = 0.2;
        mWithholdingtax = mGross_pay * mTaxRate;
    }else if (mBasic_salary >= 40000 && mBasic_salary <= 45000) {
        mOvertime_pay = mOvertime_hours * (0.01 * mBasic_salary);
        mGross_pay = mBasic_salary + mOvertime_pay;
        mTaxRate = 0.25;
        mWithholdingtax = mGross_pay * mTaxRate;
    }else if (mBasic_salary >= 50000 && mBasic_salary <= 55000) {
        mOvertime_pay = mOvertime_hours * (0.01 * mBasic_salary);
        mGross_pay = mBasic_salary + mOvertime_pay;
        mTaxRate = 0.3;
        mWithholdingtax = mGross_pay * mTaxRate;
    }
    return this->mWithholdingtax =  mGross_pay * mTaxRate;
}

double Payslip::getNet_pay(){
    return this->mNet_pay = mGross_pay - mWithholdingtax - mFixed_value;
}

#endif