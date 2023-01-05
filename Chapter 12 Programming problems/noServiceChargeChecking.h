#pragma once

#include "checkingAccount.h"

class noServiceChargeChecking : public checkingAccount {
private:
	const double NO_SERVICE_INTEREST = 2.00;
	const double MIN_BAL = 500;
	int write_checks_montly_limit = 10;
public:
	void makeDeposit(double);
	void withdraw(double);
	void writeCheck(double);


	void printStatement();

	noServiceChargeChecking();
	noServiceChargeChecking(string given_name, int give_accountNumber, double given_balance);
};