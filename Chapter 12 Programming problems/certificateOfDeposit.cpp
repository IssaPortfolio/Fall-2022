#include "certificateOfDeposit.h"
#include <iostream>

void certificateofDeposit::makeDeposit(double deposit_amount){
	balance += deposit_amount;

}

void certificateofDeposit::withdraw(double withdraw_amount){
	balance -= withdraw_amount;

}


void certificateofDeposit::printStatement(){
	cout << "CERTIFICATE OF DEPOSIT" << endl;
	cout << "Name: " << name << endl;
	cout << "Account #: " << accountNumber << endl;
	cout << "Balance $" << balance << endl;
	cout << endl << endl;
}

certificateofDeposit::certificateofDeposit(){}
certificateofDeposit::certificateofDeposit(string given_name, int given_accountNumber, double given_balance) {
	name = given_name;
	accountNumber = given_accountNumber;
	balance = given_balance;
}