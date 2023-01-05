#include "CInvoicePersonDate.h"

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Setters
void CInvoicePersonDate::setName(string firstName, string lastName) {
    customer.setName(firstName, lastName);

}
void CInvoicePersonDate::setDate(int day, int month, int year) {
    purchDate.setDate(month, day, year);
}

// Getters
string CInvoicePersonDate::getFirstName() const {
    return customer.getFirstName();
}
string CInvoicePersonDate::getLastName() const {
    return customer.getLastName();
}
int CInvoicePersonDate::getMonth() const {
    return purchDate.getMonth();
}
int CInvoicePersonDate::getDay() const {
    return purchDate.getDay();
}
int CInvoicePersonDate::getYear() const {
    return purchDate.getYear();
}

// Print
void CInvoicePersonDate::print() const {
    // Clear Console
    system("cls");

    int indent = 25;

    cout << "ABC Hardware Store Invoice\n" << endl;

    cout << left << setw(indent) << "Purchase Date: ";
    purchDate.printDate();
    cout << endl;

    cout << left << setw(indent) << "Customer name: ";
    customer.print();
    cout << endl;

    cout << left << setw(indent) << "Part Number: " << part_num << endl;

    cout << left << setw(indent) << "Part Description: " << part_desc << endl;

    cout << left << setw(indent) << "Quantity Purchased: " << item_quant << endl;

    cout << left << setw(indent) << "Price per Item: " << "$" << item_cost << endl;

    cout << endl;

    cout << left << setw(indent) << "Invoice Amount: " << "$" << getInvoiceAmount() << endl;

    cout << endl;
}

// Parameterized Constructor
CInvoicePersonDate::CInvoicePersonDate(string firstName, string lastName, int month,
                   int day, int year, string num,
                   string desc, int quantity, double price_per_item)
                   :customer(firstName, lastName), purchDate(month, day, year) {

    part_num = num;
    part_desc = desc;
    item_quant = quantity;
    item_cost = price_per_item;
}

// Destructor
CInvoicePersonDate::~CInvoicePersonDate() {

}