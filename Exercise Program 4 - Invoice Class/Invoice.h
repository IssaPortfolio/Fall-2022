#pragma once
#include <string>
using namespace std;

class Invoice
{
private:
	// Members
	string part_num;
	string part_desc;
	int item_quant = 0;
	double item_cost = 0;

public:
	// Setters
	void setPartNum();
	void setPartDesc();
	void setItemQuant();
	void setItemCost();

	// Getters
	string getPartNum() const;
	string getPartDesc() const;
	int getItemQuant() const;
	double getItemCost() const;
	
	// Invoice Total
	double getInvoiceAmount() const;

	// Print
	void print() const;

	// Constructors
	Invoice();
	Invoice(string given_part_number, string given_part_description, 
		int given_item_quantity, double given_item_price);

};