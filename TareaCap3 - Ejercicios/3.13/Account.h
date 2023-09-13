#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
    Account(std::string accountName, int initialBalance);

    void deposit(int depositAmount);
    int getBalance() const;
    void setName(std::string accountName);
    std::string getName() const;

private:
    std::string name;
    int balance;
};

void displayAccount(const Account& accountToDisplay);

#endif
