#pragma once

#include <string>
using namespace std;

class bankAccount
{
private:
	// Members
	string accName;
	static int accNum;
	string accType;
	double accBalance;
	double accInterestRate;

public:
	// Default constructor and paramterized constructor
	bankAccount();
	bankAccount(string accName, string accType, double accBalance, double accInterestRate);

};