#include "highInterestChecking.h"
#include <iostream>

void highInterestChecking::makeDeposit(double deposit_amount){
	balance += deposit_amount;
}

void highInterestChecking::withdraw(double withdraw_amount){
	balance -= withdraw_amount;
}


void highInterestChecking::printStatement(){
	cout << "HIGH INTEREST CHECKING" << endl;
	cout << "Name: " << name << endl;
	cout << "Account #: " << accountNumber << endl;
	cout << "Balance $" << balance << endl;
	cout << "Interest: " << HIGH_INTEREST << "%" << endl;
	cout << "Minimum Balance: $" << MINBAL << endl;
	cout << endl << endl;
}

highInterestChecking::highInterestChecking(){}
highInterestChecking::highInterestChecking(string given_name, int given_accountNumber, double given_balance) {
	name = given_name;
	accountNumber = given_accountNumber;
	balance = given_balance;
}