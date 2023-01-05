#include "noServiceChargeChecking.h"
#include <iostream>
using namespace std;

void noServiceChargeChecking::makeDeposit(double deposit_amount){
	balance += deposit_amount;
}

void noServiceChargeChecking::withdraw(double withdraw_amount){
	balance -= withdraw_amount;
}

void noServiceChargeChecking::writeCheck(double check_amount) {
	if (write_checks_montly_limit != 0)
	{
		balance -= check_amount;
		write_checks_montly_limit -= 1;
	}
	else {
		cout << "Check Limit Reached." << endl;
	}
}



void noServiceChargeChecking::printStatement(){
	cout << "NO SERVICE CHARGE CHECKING" << endl;
	cout << "Name: " << name << endl;
	cout << "Account #: " << accountNumber << endl;
	cout << "Balance $" << balance << endl;
	cout << "Check monthly limits left: " << write_checks_montly_limit << endl;
	cout << "Interest: " << NO_SERVICE_INTEREST << "%" << endl;
	cout << "Minimum Balance: $" << MIN_BAL << endl;
	cout << endl << endl;
}


noServiceChargeChecking::noServiceChargeChecking(){}
noServiceChargeChecking::noServiceChargeChecking(string given_name, int given_accountNumber, double given_balance) {
	name = given_name;
	accountNumber = given_accountNumber;
	balance = given_balance;
}