#include "savingsAccount.h"
#include <iostream>

void savingsAccount::makeDeposit(double deposit_amount){
	balance += deposit_amount;
}

void savingsAccount::withdraw(double withdraw_amount){
	balance -= withdraw_amount;
}


void savingsAccount::printStatement(){
	cout << "SAVINGS ACCOUNT" << endl;
	cout << "Name: " << name << endl;
	cout << "Account #: " << accountNumber << endl;
	cout << "Balance $" << balance << endl;
	cout << "Interest: " << SAVINGS_INTEREST << "%" << endl;
	cout << endl << endl;
}

savingsAccount::savingsAccount(){}
savingsAccount::savingsAccount(string given_name, int given_accountNumber, double given_balance) {
	name = given_name;
	accountNumber = given_accountNumber;
	balance = given_balance;
}