#pragma once
#include "Invoice.h"
#include "dateType.h"
#include "personType.h"
#include <string>

// Inheritence (Gets everything that is public from Invoice class for free)
class CInvoicePersonDate: public Invoice {
private:
    // Objects
    personType customer;
    dateType purchDate;
public:
    // Methods
    void setName(string firstName, string lastName);
    void setDate(int day, int month, int year);
    string getFirstName() const;
    string getLastName() const;
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void print() const;
    // Parameterized Constructor
    CInvoicePersonDate(string = "unknown", string = " unknown", int = 1,
        int = 1, int = 1900, string = "Not",
        string = "Available", int = 0, double = 0.00);
    // Destructor
    ~CInvoicePersonDate();
};