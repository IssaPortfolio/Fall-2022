#include "highInterestSavings.h"
#include <iostream>

void highInterestSavings::makeDeposit(double deposit_amount){
	balance += deposit_amount;
}

void highInterestSavings::withdraw(double withdraw_amount){
	balance -= withdraw_amount;
}



void highInterestSavings::printStatement(){
	cout << "HIGH INTEREST SAVINGS" << endl;
	cout << "Name: " << name << endl;
	cout << "Account #: " << accountNumber << endl;
	cout << "Balance $" << balance << endl;
	cout << "Interest: " << SAVINGS_INTEREST << "%" << endl;
	cout << "Minimum Balance: $" << MIN_BAL << endl;
	cout << endl << endl;
}
highInterestSavings::highInterestSavings(){}
highInterestSavings::highInterestSavings(string given_name, int given_accountNumber, double given_balance) {
	name = given_name;
	accountNumber = given_accountNumber;
	balance = given_balance;
}