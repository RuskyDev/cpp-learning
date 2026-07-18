#include <iostream>

int main() {
    int first_number = 15;
    int second_number = 4;

    std::cout << "========== MATH ==========" << std::endl;
    std::cout << "First Number: " << first_number << std::endl;
    std::cout << "Second Number: " << second_number << std::endl << std::endl;

    std::cout << "Addition: " << first_number + second_number << std::endl;
    std::cout << "Subtraction: " << first_number - second_number << std::endl;
    std::cout << "Multiplication: " << first_number * second_number << std::endl;
    std::cout << "Division: " << first_number / second_number << std::endl;
    std::cout << "Remainder: " << first_number % second_number << std::endl;

    std::cout << "==========================" << std::endl;
    return 0;
}