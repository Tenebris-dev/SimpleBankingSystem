// main.cpp
#include "Account.h"
#include <iostream>

int main() {
    Account account("John Doe", 1000.0);
    account.printBalance();

    std::cout << "Depositing $500..." << std::endl;
    account.deposit(500);
    account.printBalance();

    std::cout << "Withdrawing $200..." << std::endl;
    account.withdraw(200);
    account.printBalance();

    std::cout << "Withdrawing $1500..." << std::endl;
    account.withdraw(1500);
    account.printBalance();

    return 0;
}