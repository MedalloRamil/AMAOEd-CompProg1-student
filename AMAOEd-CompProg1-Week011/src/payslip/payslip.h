#ifndef _PAYSLIP
#define _PAYSLIP

#include <string>

using namespace std;

class Payslip{
    private:
        string mEmployeeName, mPayGrade;
        double mBasicSalary, mNetPay, mWtax, mTaxRate, mGrossPay; 
        double mOthrs, mOtPay, mFixedvalue = 800;

        void determinePayGradeAndTaxRate();
        void computePay();
    public:
        string getEmployeeName(){return mEmployeeName;}
        string getPayGrade(){return mPayGrade;}
        double getBasicSalary(){return mBasicSalary;}
        double getNetPay(){return mNetPay;}
        double getWtax(){return mWtax;}
        double getTaxRate(){return mTaxRate;}
        double getGrossPay(){return mGrossPay ;}
        double getOthrs(){return mOthrs;}
        double getOtPay(){return mOtPay;}
        double getFixedvalue(){return mFixedvalue;}


        void setEmployeeName(string);
        void setBasicSalary(double);
        void setOthrs(double);
};

void Payslip::setEmployeeName(string name){
    mEmployeeName = name;
}

void Payslip::setBasicSalary(double a){
    mBasicSalary = a;
}

void Payslip::setOthrs(double h){
    mOthrs = h;
}

void Payslip::determinePayGradeAndTaxRate(){
    if(mBasicSalary >= 10000 && mBasicSalary < 15000){
        mPayGrade = "A";
        mTaxRate = 0.1;
    }else if(mBasicSalary >= 15000 && mBasicSalary < 20000){
        mPayGrade = "B";
        mTaxRate = 0.1;
    }else if(mBasicSalary >= 20000 && mBasicSalary < 25000){
        mPayGrade = "A";
        mTaxRate = 0.15;
    }else if(mBasicSalary >= 25000 && mBasicSalary < 30000){
        mPayGrade = "B";
        mTaxRate = 0.15;
    }else if(mBasicSalary >= 30000 && mBasicSalary < 35000){
        mPayGrade = "A";
        mTaxRate = 0.2;
    }else if(mBasicSalary >= 35000 && mBasicSalary < 40000){
        mPayGrade = "B";
        mTaxRate = 0.2;
    }else if(mBasicSalary >= 40000 && mBasicSalary < 45000){
        mPayGrade = "A";
        mTaxRate = 0.25;
    }else if(mBasicSalary >= 45000 && mBasicSalary < 50000){
        mPayGrade = "B";
        mTaxRate = 0.25;
    }else if(mBasicSalary >= 50000 && mBasicSalary < 55000){
        mPayGrade = "A";
        mTaxRate = 0.3;
    }else{
        mPayGrade = "B";
        mTaxRate = 0.3;
    }
}

void Payslip::computePay(){
    mGrossPay = mBasicSalary + mOtPay;
    mOtPay = mOthrs * (0.01 * mBasicSalary);
    mNetPay= mGrossPay - mWtax - mFixedvalue;
    mWtax = mGrossPay * mTaxRate; 

}

#endif