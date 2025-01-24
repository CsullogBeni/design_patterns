#pragma once

#include <list>
#include <string>
#include "IBank.hpp"
#include "BankAccount.hpp"


/**
 * @class Bank
 * @brief A class representing a bank.
 *
 * This class is an implementation of the IBank interface. It encapsulates a
 * list of BankAccount objects and provides methods to deposit and withdraw
 * money from the accounts, and to list the accounts and their data.
 * 
 * Sercice object from the Proxy design pattern.
 */
class Bank : public IBank
{
private:
    /**
     * @brief List of BankAccount objects.
     *
     * This list stores all the BankAccount objects created by the Bank.
     */
    std::list<BankAccount> accounts;

public:
    /**
     * @brief Constructor.
     *
     * This constructor creates a new Bank object.
     */
    Bank();

    /**
     * @brief Destructor.
     *
     * This destructor deletes the Bank object.
     */
    ~Bank();

    /**
     * @brief Add a new user to the bank.
     * @param owner The name of the new user.
     * @param balance The initial balance of the new user.
     */
    void AddUser(std::string owner, int balance) override;

    /**
     * @brief Deposit money to an account.
     * @param owner The name of the account owner.
     * @param amount The amount of money to deposit.
     */
    void Deposit(std::string owner, int amount) override;

    /**
     * @brief Withdraw money from an account.
     * @param owner The name of the account owner.
     * @param amount The amount of money to withdraw.
     * @return The amount of money that was withdrawn.
     */
    void Withdraw(std::string owner, int amount) override;

    /**
     * @brief List all accounts in the bank.
     * @param owner The name of the account owner.
     */
    void ListAccounts(std::string owner) override;

    /**
     * @brief List the data of an individual account.
     * @param owner The name of the account owner.
     */
    void ListAccountData(std::string owner) override;
};