#include <iostream>

int main() {
    int age = 25;

    // If age is less then 13.
    if (age < 13) {
        std::cout << "You are a child.\n";
    }
    // If age is less then 18
    else if (age < 18) {
        std::cout << "You are a teenager\n";
    }
    else {
        std::cout << "You are a adult.\n";
    }

    return 0;
}