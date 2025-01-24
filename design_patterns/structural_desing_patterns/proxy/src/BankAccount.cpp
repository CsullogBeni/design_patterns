#include "BankAccount.hpp"


/**
 * @brief Constructor.
 * @param owner The name of the account owner.
 * @param balance The balance of the account.
 */
BankAccount::BankAccount(std::string owner, int balance) : owner(owner), balance(balance) {}

/**
 * @brief Destructor.
 *
 * This destructor deletes the object.
 */
BankAccount::~BankAccount() {}

/**
 * @brief Deposit money to the account.
 * @param amount The amount of money to deposit.
 */
void BankAccount::Deposit(int amount) {
    balance += amount;
}

/**
 * @brief Withdraw money from the account.
 * @param amount The amount of money to withdraw.
 * @return The amount of money that was withdrawn.
 */
int BankAccount::Withdraw(int amount) {
    if (balance >= amount) {
        balance -= amount;
        return amount;
    }
    else {
        throw std::invalid_argument("Insufficient funds");
    }
    return 0;
}

std::string BankAccount::GetOwner() {
    return owner;
}

/**
 * @brief Get the balance of the account.
 * @return The balance of the account.
 */
int BankAccount::GetBalance() {
    return balance;
}
