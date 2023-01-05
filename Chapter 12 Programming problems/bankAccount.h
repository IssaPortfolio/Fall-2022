#pragma once
#include <string>
using namespace std;

class bankAccount {
protected:
	string name = "";
	int accountNumber = 0;
	double balance = 0.00;
public:
	virtual void makeDeposit(double) = 0;
	virtual void withdraw(double) = 0;
	virtual void printStatement() = 0;

};