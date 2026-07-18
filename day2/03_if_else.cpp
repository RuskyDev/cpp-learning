#include <iostream>

int main() {
    int age = 18;
    // will check if age is less then 18.
    if (age < 18) {
        std::cout << "You are under the age of 18." << std::endl;
    }
    // if its not it will say you are an adult.
    else {
        std::cout << "You are an adult." << std::endl;
    }
}