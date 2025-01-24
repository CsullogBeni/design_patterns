#include "BankProxy.hpp"


/**
 * @class BankProxy
 * @brief This class represents a proxy for Bank object.
 *
 * The BankProxy class is a proxy for the Bank class. It provides the same
 * interface as the Bank class but it is responsible for creating the Bank
 * object and calling its methods. This class is used to delay the creation
 * of the Bank object until the moment it is actually needed.
 */
BankProxy::BankProxy() 
{
    bank = Bank();
}

/**
 * @brief Destructor.
 *
 * This destructor deletes the Bank object.
 */
BankProxy::~BankProxy() {}

/**
 * @brief Add a new user to the bank.
 * @param owner The name of the new user.
 * @param balance The initial balance of the new user.
 */
void BankProxy::AddUser(std::string owner, int balance)
{
    bank.AddUser(owner, balance);
}

/**
 * @brief Deposit money to an account.
 * @param owner The name of the account owner.
 * @param amount The amount of money to deposit.
 */
void BankProxy::Deposit(std::string owner, int amount) 
{
    bank.Deposit(owner, amount);
}

/**
 * @brief Withdraw money from an account.
 * @param owner The name of the account owner.
 * @param amount The amount of money to withdraw.
 */
void BankProxy::Withdraw(std::string owner, int amount) 
{
    bank.Withdraw(owner, amount);
}

/**
 * @brief List all accounts in the bank.
 * @param owner The name of the account owner.
 */
void BankProxy::ListAccounts(std::string owner)
{
    if (owner == "admin") 
    {
        bank.ListAccounts(owner);
    }
    else
    {
        std::cout << "No permission to list accounts for " << owner << std::endl;
    }
}

/**
 * @brief List the data of an individual account.
 * @param owner The name of the account owner.
 */
void BankProxy::ListAccountData(std::string owner)
{
    bank.ListAccountData(owner);
}
