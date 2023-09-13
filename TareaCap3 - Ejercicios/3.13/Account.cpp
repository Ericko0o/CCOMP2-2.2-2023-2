#include <iostream>
#include "Account.h"


Account::Account(std::string accountName, int initialBalance)
    : name(accountName), balance(initialBalance) {
}

void Account::deposit(int depositAmount) {
    if (depositAmount > 0) {
        balance += depositAmount;
    }
}

int Account::getBalance() const {
    return balance;
}

void Account::setName(std::string accountName) {
    name = accountName;
}

std::string Account::getName() const {
    return name;
}

void displayAccount(const Account& accountToDisplay) {
    std::cout << accountToDisplay.getName() << " balance is $" << accountToDisplay.getBalance() << std::endl;
}
