#include <string>

class Account {
public:
    Account(unsigned int number, std::string name, std::string lname, double initialBalance)
        : accountNumber(number), firstName(name), lastName(lname), balance(0) {
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance += depositAmount;
        }
    }

    int getBalance() const {
        return balance;
    }

    void setName(std::string name) {
        firstName = name;
    }

    std::string getName() const {
        return firstName + " " + lastName; 
    }

private:
    unsigned int accountNumber{0};
    std::string firstName{};
    std::string lastName{}; 
    double balance{0};
};