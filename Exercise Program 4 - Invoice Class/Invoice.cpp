#include "Invoice.h"
#include <iostream>
#include <iomanip>

// Setters
void Invoice::setPartNum(){
	cout << "Input Part Number: ";
	cin >> part_num;
}
void Invoice::setPartDesc() {
	cout << "Input Part Description: ";
	cin >> part_desc;
}
void Invoice::setItemQuant(){
	cout << "Input Item(s) Quantity: ";
	cin >> item_quant;
}
void Invoice::setItemCost(){
	cout << "Input Item Cost: $";
	cin >> item_cost;
}

// Getters
string Invoice::getPartNum() const {
	return part_num;
}
string Invoice::getPartDesc() const {
	return part_desc;
}
int Invoice::getItemQuant() const {
	return item_quant;
}
double Invoice::getItemCost() const {
	return item_cost; 
}

// Invoice Total
double Invoice::getInvoiceAmount() const {
	if (item_quant >= 0)
		return item_quant * item_cost;
	else
		return 0;
}

// Print
void Invoice::print() const {
	cout << setw(100) << setfill('-') << "\n";
	cout << "INPUTTED VALUES:" << "\n" << endl;
	cout << "Part Number: " << part_num << endl;
	cout << "Part Description: " << part_desc << endl;
	cout << "Item(s) Quantity: " << item_quant << endl;
	cout << "Item Cost: $" << item_cost << endl;
	cout << "Invoice Amount: $" << getInvoiceAmount() << endl;
	cout << setw(100) << setfill('-') << "\n";
}

// Constructors
Invoice::Invoice(){
}
Invoice::Invoice(string given_part_number, string given_part_description, 
	int given_item_quantity, double given_item_price) {

	part_num = given_part_number;
	part_desc = given_part_description;
	item_quant = given_item_quantity;
	item_cost = given_item_price;
}
