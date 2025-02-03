#include "BankProxy.hpp"


/**
 * @brief Entry point of the application.
 *
 * This function is the entry point of the application. It creates a BankProxy
 * object and uses it to perform some operations on the bank accounts.
 */
int main() 
{
    BankProxy bankProxy;

    bankProxy.AddUser("John", 1000);

    bankProxy.Deposit("John", 100);
    bankProxy.Withdraw("John", 5000);
    bankProxy.Withdraw("John", 500);
    bankProxy.ListAccounts("John");
    bankProxy.ListAccountData("John");

    bankProxy.ListAccounts("admin");

    return 0;
}