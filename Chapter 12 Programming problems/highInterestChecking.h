#pragma once

#include "noServiceChargeChecking.h"

class highInterestChecking : public noServiceChargeChecking {
private:
	const double HIGH_INTEREST = 5;
	const double MINBAL = 1000;
public:
	void makeDeposit(double);
	void withdraw(double) ;


	void printStatement();

	highInterestChecking();
	highInterestChecking(string given_name, int given_accountNumber, double given_balance);
};