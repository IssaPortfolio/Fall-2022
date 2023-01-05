#include <iostream>
#include "bankAccount.h"
using namespace std;

// Default constructor
bankAccount::bankAccount(){}
// Paramaterized constructor
bankAccount::bankAccount(string name, string type, double balance, double interestRate)
{
	accName = name;
	accType = type;
	accBalance = balance;
	accInterestRate = interestRate;
	accNum++;


}