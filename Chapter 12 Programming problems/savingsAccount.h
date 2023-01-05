#pragma once

#include "bankAccount.h"

class savingsAccount : public bankAccount {
protected:
	const double SAVINGS_INTEREST = 0.2;
public:
	void makeDeposit(double);
	void withdraw(double);


	void printStatement();

	savingsAccount();
	savingsAccount(string given_name, int give_accountNumber, double given_balance);
};

