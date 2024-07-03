// Account.cpp
#include "Account.h"
#include <iostream>

Account::Account(std::string owner, double initialBalance) : owner(owner), balance(initialBalance) {}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds" << std::endl;
    }
}

void Account::printBalance() const {
    std::cout << owner << "'s balance: $" << balance << std::endl;
}