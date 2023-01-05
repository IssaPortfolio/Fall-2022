#include "Invoice.h"
#include <iostream>
using namespace std;

int main()
{
    // Instance (paramterized constructor)
    Invoice invoice("", "", 0, 0.00);
    
    // Set methods
    invoice.setPartNum();
    invoice.setPartDesc();
    invoice.setItemQuant();
    invoice.setItemCost();

    // Get methods
    invoice.getPartNum();
    invoice.getPartDesc();
    invoice.getItemQuant();
    invoice.getItemCost();

    // Calculate invoice amount
    invoice.getInvoiceAmount();

    // Print
    invoice.print();

    // Pause
    system("pause");
    return 0;
}

