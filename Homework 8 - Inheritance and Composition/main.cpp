#include "CInvoicePersonDate.h"
#include <iostream>
using namespace std;

int main()
{
    // Store Name
    string firstName;
    string lastName;
    // Get First Name
    cout << "Enter First Name: ";
    cin >> firstName;
    // Get Last Name
    cout << "Enter Last Name: ";
    cin >> lastName;

    // Store Day Purchased
    int monthPurch ;
    int dayPurch;
    int yearPurch;
    // Get Month Purchased
    cout << "Enter Month Purchased: ";
    cin >> monthPurch;
    // Get Day Purchased
    cout << "Enter Day Purchased: ";
    cin >> dayPurch;
    // Get Year Purchased
    cout << "Enter Year Purchased: ";
    cin >> yearPurch;

    // Object
    CInvoicePersonDate invoice(firstName, lastName, monthPurch, dayPurch, yearPurch, "Not", "Available", 0, 0.00);

    // Set Methods
    invoice.setPartNum();
    invoice.setPartDesc();
    invoice.setItemQuant();
    invoice.setItemCost();
    invoice.setName(firstName, lastName);
    invoice.setDate(dayPurch, monthPurch, yearPurch);

    // Get Methods
    invoice.getPartNum();
    invoice.getPartDesc();
    invoice.getItemQuant();
    invoice.getItemCost();
    // Name Methods
    invoice.getFirstName();
    invoice.getLastName();
    // Date Methods
    invoice.getMonth();
    invoice.getDay();
    invoice.getYear();

    // Calculate Invoice Amount
    invoice.getInvoiceAmount();

    // Print
    invoice.print();
    
    // Pause
    system("pause");
    return 0;
}

// I removed print from Invoice class because in last assignment it didn't make sense for it to be there. 
// And changes cout for user input in Invoice class to stay consistent.