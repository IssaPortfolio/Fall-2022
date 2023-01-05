#include <iostream>

#include "certificateOfDeposit.h" 
#include "highInterestChecking.h" 
#include "highInterestSavings.h" 
#include "serviceChargeChecking.h" 
using namespace std;


int main()
{
    string name = "Issa Habeeb";
    int account_number = 123;


    serviceChargeChecking service_account(name, account_number, 5000);
    serviceChargeChecking* p_service_account;
    p_service_account = &service_account;
    p_service_account->makeDeposit(50);
    p_service_account->withdraw(100);
    p_service_account->writeCheck(200);
    p_service_account->printStatement();


    noServiceChargeChecking noService_account(name, account_number, 3000.40);
    noServiceChargeChecking* p_noService_account;
    p_noService_account = &noService_account;
    p_noService_account->makeDeposit(500);
    p_noService_account->withdraw(1000);
    p_noService_account->writeCheck(700);
    p_noService_account->writeCheck(500);
    p_noService_account->writeCheck(600);
    p_noService_account->writeCheck(200);
    p_noService_account->printStatement();


    highInterestChecking highInterestChecking_account(name, account_number, 6000.20);
    highInterestChecking* p_highInterestChecking_account;
    p_highInterestChecking_account = &highInterestChecking_account;
    p_highInterestChecking_account->makeDeposit(200);
    p_highInterestChecking_account->withdraw(5000);
    p_highInterestChecking_account->printStatement();


    savingsAccount savings_account(name, account_number, 3200.57);
    savingsAccount* p_savings_account;
    p_savings_account = &savings_account;
    p_savings_account->makeDeposit(5000);
    p_savings_account->withdraw(50.50);
    p_savings_account->printStatement();


    highInterestSavings highInterestSavings_account(name, account_number, 8574.32);
    highInterestSavings* p_highInterestSavings_account;
    p_highInterestSavings_account = &highInterestSavings_account;
    p_highInterestSavings_account->makeDeposit(50);
    p_highInterestSavings_account->withdraw(90.30);
    p_highInterestSavings_account->printStatement();


    certificateofDeposit cD_account(name, account_number, 6349.1);
    certificateofDeposit* p_cD_account;
    p_cD_account = &cD_account;
    p_cD_account->makeDeposit(200);
    p_cD_account->withdraw(100.50);
    p_cD_account->printStatement();


    system("pause");
    return 0;
}

