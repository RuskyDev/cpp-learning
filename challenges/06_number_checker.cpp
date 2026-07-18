#include <iostream>

int main() {
    int number;

    std::cout << "==========================" << std::endl;
    std::cout << "     NUMBER CHECKER" << std::endl;
    std::cout << "==========================" << std::endl << std::endl;

    std::cout << "Enter a number:" << std::endl;
    std::cin >> number;
    std::cout << std::endl;
    std::cout << "==========================" << std::endl << std::endl;
    
    if (number >= 0) {
        std::cout << "The number is positive." << std::endl << std::endl;
    } 
    else {
        std::cout << "The number is negative." << std::endl << std::endl;
    }
    std::cout << "Thanks for using Number Checker!" << std::endl;
    return 0;
}