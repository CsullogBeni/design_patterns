#include "BankProxy.hpp"


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