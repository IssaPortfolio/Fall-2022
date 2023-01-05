#include <iostream>
#include "bankAccount.h"
using namespace std;

const int NUM_OF_ACCOUNTS = 10;

int main()
{
    // Instance array
    bankAccount accounts[NUM_OF_ACCOUNTS];

    // Instances arguments
    accounts[0] = bankAccount("Issa", "Checking", 3000, 0.00);
    accounts[1] = bankAccount("Issa", "Saving", 500, 0.02);

    // Output bank account info
    for (int i = 0; i < NUM_OF_ACCOUNTS; i++)
    {
        cout << "Name: " << accounts[i].accName << "\n" << "Account #: " << accounts[i].accNum << "\n"
             << "Account Type: " << accounts[i].accType << "\n" << "Account Balance: " << accounts[i].accBalance << "\n"
             << "Account Interest Rate %: " << accounts[i].accInterestRate << "\n" << endl;
    }
    

    system("pause");
    return 0;
}