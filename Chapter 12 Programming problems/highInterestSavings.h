#pragma once

#include "savingsAccount.h"

class highInterestSavings : public savingsAccount {
private:
	const double MIN_BAL = 1500;
public:
	void makeDeposit(double);
	void withdraw(double);


	void printStatement();

	highInterestSavings();
	highInterestSavings(string given_name, int given_accountNumber, double given_balance);
};