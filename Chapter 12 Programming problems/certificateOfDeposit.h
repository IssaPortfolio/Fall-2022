#pragma once

#include "bankAccount.h"

class certificateofDeposit : public bankAccount {

public:
	void makeDeposit(double);
	void withdraw(double);
	void printStatement();



	certificateofDeposit();
	certificateofDeposit(string given_name, int give_accountNumber, double given_balance);
};