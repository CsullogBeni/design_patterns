#pragma once

#include <iostream>


/**
 * @class IBank
 * @brief An abstract base class that represents a bank.
 *
 * This class represents a bank and declares methods that can be used to deposit
 * and withdraw money from accounts, list all accounts and list the data of
 * individual accounts. This class is an interface for all concrete bank
 * classes. It declares pure virtual methods that must be implemented by
 * each derived class.
 */
class IBank
{
public:
    /**
     * @brief Add a new user to the bank.
     * 
     * @param owner the name of the new user.
     * @param balance the initial balance of the new user.
     */
    virtual void AddUser(std::string owner, int balance) = 0;

    /**
     * @brief Deposit money to an account.
     * @param owner The name of the account owner.
     * @param amount The amount of money to deposit.
     */
    virtual void Deposit(std::string owner, int amount) = 0;

    /**
     * @brief Withdraw money from an account.
     * @param owner The name of the account owner.
     * @param amount The amount of money to withdraw.
     * @return The amount of money that was withdrawn.
     */
    virtual void Withdraw(std::string owner, int amount) = 0;

    /**
     * @brief List all accounts in the bank.
     * @param owner The name of the account owner.
     */
    virtual void ListAccounts(std::string) = 0;

    /**
     * @brief List the data of an individual account.
     * @param owner The name of the account owner.
     */
    virtual void ListAccountData(std::string owner) = 0;
};
