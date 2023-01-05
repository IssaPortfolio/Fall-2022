#include "Invoice.h"
#include <iostream>
#include <iomanip>


// Setters
void Invoice::setPartNum(){
	cout << "Enter Part Number: ";
	cin >> part_num;
}
void Invoice::setPartDesc() {
	cout << "Enter Part Description: ";
	// Cin But Also Includes Whitespace Such As Spaces
	getline (cin >> ws, part_desc);
}
void Invoice::setItemQuant(){
	cout << "Enter Quantity Purchased: ";
	cin >> item_quant;
}
void Invoice::setItemCost(){
	cout << "Enter Price per Item: $";
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
	if (item_quant > 0)
		return item_quant * item_cost;
	else
		return 0;
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
