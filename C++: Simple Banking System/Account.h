// Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string owner;
    double balance;

public:
    Account(std::string owner, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    void printBalance() const;
};

#endif // ACCOUNT_H