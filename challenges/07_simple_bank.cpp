#include <iostream>

int main() {
    int current_balance;
    int withdrawal_amount;

    std::cout << "==========================" << std::endl;
    std::cout << "      SIMPLE BANK" << std::endl;
    std::cout << "==========================" << std::endl << std::endl;

    std::cout << "Enter your current balance:" << std::endl;
    std::cin >> current_balance;
    std::cout << std::endl;

    std::cout << "Enter withdrawal amount:" << std::endl;
    std::cin >> withdrawal_amount;
    std::cout << std::endl;

    std::cout << "==========================" << std::endl << std::endl;
    
    if (current_balance >= withdrawal_amount) {
        std::cout << "Withdrawal successful." << std::endl;
        std::cout << "Remaining balance: " << current_balance - withdrawal_amount << std::endl << std::endl;
    } else {
        std::cout << "Insufficient funds." << std::endl << std::endl;
    }
    std::cout << "Thank you for using Simple Bank!" << std::endl;

    return 0;
}