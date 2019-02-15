#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    float Tuitionfee;
    float DownPayment;
    float Balance;
    float ratePerUnit;
    int yearLevel;
    double noOfUnits;
    char name[150];
    char course[150];
    string yearName;

    cout << "Student Name      : ";
    cin.getline(name, sizeof(name));
    cout << "Progrm/Course     : ";
    cin.getline(course, sizeof(course));
    cout << "Year Level        : ";
    cin >> yearLevel;
    cout << "No. of Units      : ";
    cin >> noOfUnits;
    cout << "----------------------------------------------------"<< endl;
    cout << endl;
    if (yearLevel == 1) {
        yearName = "Freshman";
        ratePerUnit = 1500;
        Tuitionfee = noOfUnits * ratePerUnit;
        DownPayment = 0.3 * Tuitionfee;
        Balance = Tuitionfee - DownPayment;

    }else if (yearLevel == 2) {
        yearName = "Sophomore";
        ratePerUnit = 1800;
        Tuitionfee = noOfUnits * ratePerUnit;
        DownPayment = 0.3 * Tuitionfee;
        Balance = Tuitionfee - DownPayment;
        
    }else if (yearLevel ==3 ) {
        yearName = "Junior";
        ratePerUnit = 2000;
        Tuitionfee = noOfUnits * ratePerUnit;
        DownPayment = 0.3 * Tuitionfee;
        Balance = Tuitionfee - DownPayment;
    }else if (yearLevel >= 4 && yearLevel <= 5) {
        yearName = "Senior";
        ratePerUnit = 2300;
        Tuitionfee = noOfUnits * ratePerUnit;
        DownPayment = 0.3 * Tuitionfee;
        Balance = Tuitionfee - DownPayment;

    }else{
        cout << "You have enter an invalid value"<< endl;
        system("PAUSE");
        return EXIT_FAILURE;
    }
    if (!noOfUnits){
        cout << "Numeric only please"<< endl;
    }else{

    cout << endl;
    cout << "           ENROLLMENT SLIP"<< endl;
    cout << "student Name       : "<< name << endl;
    cout << "Program/Course     : "<< course << endl;
    cout << "Year Name          : "<< yearName << endl;
    cout << "No. of Units       : "<< noOfUnits << endl;
    cout << "Tuition Fee        : "<< Tuitionfee << endl;
    cout << "Down Payment       : "<< DownPayment << endl;
    cout << "Balance            : "<< Balance << endl;
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}