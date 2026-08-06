#include <iostream>

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "\n";

    for (int i = 1; i <= 10; i++) {
        std::cout << number << " x " << i << " = " << i * number << "\n";
    }
    std::cout << "\n";
}