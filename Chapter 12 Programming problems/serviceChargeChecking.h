#pragma once

#include "checkingAccount.h"

class serviceChargeChecking: public checkingAccount {
private:
	int write_checks_montly_limit = 2;
	const double FEE = 5.00;
public:
	void makeDeposit(double);
	void withdraw(double);
	void writeCheck(double);


	void printStatement();

	serviceChargeChecking();
	serviceChargeChecking(string given_name, int give_accountNumber, double given_balance);
};