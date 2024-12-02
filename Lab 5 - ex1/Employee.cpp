#include "Employee.h"
#include <iostream>
#include <cstring>

using namespace std;


void Employee::assignDetails() {
	//empno = pempno;
	//strcpy_s(name, pname);
	//basicSal = pbasicSal;

}


void Employee::inputdetails()
{
	cout << "Input Employee No : ";
	cin >> empno;
	cout << "Input Name : ";
	cin >> name;
	cout << "Input Basic Salary :";
	cin >> basicSal;
}

void Employee::setAllowance() {
	cout << "Enter allowance : ";
	cin >> allowance;
}

void Employee::setOTDetails() {
	cout << "Enter OT hours : ";
	cin >> otHrs;
	cout << "Enter OT rate : ";
	cin >> otRate;
}

void Employee::calcSal() {
	salary = basicSal + allowance+(otHrs*otRate);
}

void Employee::printPaySlip() {
	cout << "-------------------------------------" << endl;
	cout << "Emp no \t : " << empno << endl;
	cout << "Name \t :" << name << endl;
	cout << "basic Salary \t :" << basicSal << endl;
	cout << "Allowance \t : " << allowance << endl;
	cout << "OT\t \t : " << (otHrs*otRate) << endl;
	cout << "Net Salary \t:" << salary << endl;
	cout << "-----------------------------------------" << endl;
}
