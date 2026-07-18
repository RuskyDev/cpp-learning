#include <iostream>

int main() {
    int first_number = 15;
    int second_number = 4;

    // we sum it with + operator
    std::cout << "Addition: " << first_number + second_number << std::endl;
    //expected output: 19

    std::cout << "Subtraction: " << first_number - second_number << std::endl;
    //expected output: 11

    std::cout << "Multiplication " << first_number * second_number << std::endl;
    //expected output: 60

    std::cout << "Division " << first_number / second_number << std::endl;
    //expected output: 3

    std::cout << "Remainder: " << first_number % second_number << std::endl;
    //output: ? 3?
    
    return 0;
}