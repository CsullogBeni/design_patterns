#pragma once

#include <iostream>


/**
 * @class BankAccount
 * @brief This class represents a bank account.
 *
 * This class encapsulates a bank account with a private member variable
 * owner of type std::string, which is the name of the account owner, and a
 * private member variable balance of type int, which is the balance of the
 * account. It has a constructor that takes a std::string and an int as
 * parameters and initializes the owner and balance member variables. It has
 * methods deposit and withdraw that change the balance of the account, and
 * a method getBalance that returns the balance of the account.
 * 
 * Represents the service interface from the Proxy design pattern.
 */
class BankAccount
{
private:

    /**
     * @brief The name of the account owner.
     */
    std::string owner;

    /**
     * @brief The balance of the account.
     */
    int balance;

public:
    /**
     * @brief Constructor.
     * @param owner The name of the account owner.
     * @param balance The balance of the account.
     */
    BankAccount(std::string owner, int balance);

    /**
     * @brief Destructor.
     *
     * This destructor deletes the object.
     */
    ~BankAccount();

    /**
     * @brief Deposit money to the account.
     * @param amount The amount of money to deposit.
     */
    void Deposit(int amount);

    /**
     * @brief Withdraw money from the account.
     * @param amount The amount of money to withdraw.
     * @return The amount of money that was withdrawn.
     */
    int Withdraw(int amount);

    /**
     * @brief Get the owner of the account.
     * @return The owner of the account.
     */
    std::string GetOwner();

    /**
     * @brief Get the balance of the account.
     * @return The balance of the account.
     */
    int GetBalance();
};
