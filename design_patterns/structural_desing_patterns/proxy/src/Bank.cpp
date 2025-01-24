#include "Bank.hpp"



Bank::Bank() 
{
    accounts = std::list<BankAccount>();
}

Bank::~Bank() {}

/**
 * @brief Add a new user to the bank.
 * @param owner The name of the new user.
 * @param balance The initial balance of the new user.
 */
void Bank::AddUser(std::string owner, int balance) 
{
    accounts.push_back(BankAccount(owner, balance));
}

/**
 * @brief Deposit money to an account.
 * @param owner The name of the account owner.
 * @param amount The amount of money to deposit.
 */
void Bank::Deposit(std::string owner, int amount) 
{
    for (auto it = accounts.begin(); it != accounts.end(); ++it) 
    {
        if (it->GetOwner() == owner) 
        {
            it->Deposit(amount);
            std::cout << "Deposit of " << amount << " made to account of " << owner << std::endl;
            return;
        }
    }
    std::cout << "No account found for " << owner << std::endl;
}

/**
 * @brief Withdraw money from an account.
 * @param owner The name of the account owner.
 * @param amount The amount of money to withdraw.
 * @return The amount of money that was withdrawn.
 */
void Bank::Withdraw(std::string owner, int amount) 
{
    for (auto it = accounts.begin(); it != accounts.end(); ++it) 
    {
        if (it->GetOwner() == owner) 
        {
            try {
                int balance = it->Withdraw(amount);
                std::cout << "Withdrawal of " << amount << " made from account of " << owner << std::endl;
            }
            catch (std::invalid_argument& e) {
                std::cout << e.what() << std::endl;
                return;
            }
            return;
        }
    }
    std::cout << "No account found for " << owner << std::endl;
}

/**
 * @brief List all accounts in the bank.
 */
void Bank::ListAccounts(std::string owner) 
{
    if (accounts.empty()) {
        std::cout << "No accounts found" << std::endl;
        return;
    }

    for (auto it = accounts.begin(); it != accounts.end(); ++it) 
    {
        std::cout << "Account owner: " << it->GetOwner() << std::endl;
        std::cout << "Account balance: " << it->GetBalance() << std::endl;
    }
}

/**
 * @brief List the data of an individual account.
 * @param owner The name of the account owner.
 */
void Bank::ListAccountData(std::string owner)
{
    for (auto it = accounts.begin(); it != accounts.end(); ++it) 
    {
        if (it->GetOwner() == owner) 
        {
            std::cout << "Account owner: " << it->GetOwner() << std::endl;
            std::cout << "Account balance: " << it->GetBalance() << std::endl;
            return;
        }
    }
    std::cout << "No account found for " << owner << std::endl;
}
