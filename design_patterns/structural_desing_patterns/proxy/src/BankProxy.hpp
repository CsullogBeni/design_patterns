#pragma once

#include <iostream>
#include "IBank.hpp"
#include "Bank.hpp"


/**
 * @class BankProxy
 * @brief This class represents a proxy for Bank object.
 *
 * The BankProxy class is a proxy for the Bank class. It provides the same
 * interface as the Bank class but it is responsible for creating the Bank
 * object and calling its methods. This class is used to delay the creation
 * of the Bank object until the moment it is actually needed.
 */
class BankProxy : public IBank
{
private:
    /**
     * @brief The Bank object.
     *
     * This is the object that the BankProxy is proxying.
     */
    Bank bank;
public:
    /**
     * @brief Constructor.
     *
     * This constructor does nothing.
     */
    BankProxy();
    
    /**
     * @brief Destructor.
     *
     * This destructor deletes the Bank object.
     */
    ~BankProxy();

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
