#pragma once

class Employee {

private :
	int empno;
	char name[20];
	double basicSal;
	double allowance;
	double salary;
	double otHrs;
	double otRate;
public :
	void assignDetails();
	void setAllowance();
	void calcSal();
	void printPaySlip();
	void setOTDetails();
	void inputdetails();
};