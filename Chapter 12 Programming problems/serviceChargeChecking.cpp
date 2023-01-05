#include "serviceChargeChecking.h"
#include <iostream>
using namespace std;

void serviceChargeChecking::makeDeposit(double deposit_amount) {
	balance += deposit_amount;
}

void serviceChargeChecking::withdraw(double withdraw_amount) {
	balance -= withdraw_amount;
}

void serviceChargeChecking::writeCheck(double check_amount) {
	if (write_checks_montly_limit != 0)
	{
		balance -= check_amount;
		write_checks_montly_limit -= 1;
	}
	else {
		cout << "Check Limit Reached." << endl;
	}
}



void serviceChargeChecking::printStatement() {
	cout << "SERVICE CHARGE CHECKING" << endl;
	cout << "Name: " << name << endl;
	cout << "Account #: " << accountNumber << endl;
	cout << "Balance $" << balance << endl;
	cout << "Monhtly Fee: $" << FEE << endl;
	cout << "Check monthly limits left: " << write_checks_montly_limit << endl;
	cout << endl << endl;
}


serviceChargeChecking::serviceChargeChecking(){}
serviceChargeChecking::serviceChargeChecking(string given_name, int given_accountNumber, double given_balance) {
	name = given_name;
	accountNumber = given_accountNumber;
	balance = given_balance;
}