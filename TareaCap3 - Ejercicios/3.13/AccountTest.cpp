#include <iostream>
#include "Account.h"
using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};


    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);


    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);


    displayAccount(account1);
    displayAccount(account2);

    return 0;
}

void displayAccount(const Account& accountToDisplay) {
    cout << accountToDisplay.getName() << " balance is $" << accountToDisplay.getBalance() << endl;
}
