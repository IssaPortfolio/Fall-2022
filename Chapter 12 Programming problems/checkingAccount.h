#pragma once
#include "bankAccount.h"

class checkingAccount : public bankAccount {
public:
	virtual void writeCheck(double) = 0;
	virtual void makeDeposit(double) = 0;
	virtual void withdraw(double) = 0;

	virtual void printStatement() = 0;

};