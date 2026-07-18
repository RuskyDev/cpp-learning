#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "==========================" << std::endl;
    std::cout << "      AGE VERIFIER" << std::endl;
    std::cout << "==========================" << std::endl << std::endl;

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << std::endl;

    std::cout << "How old are you?" << std::endl;
    std::cin >> age;
    std::cout << std::endl;

    std::cout << "==========================" << std::endl << std::endl;
    std::cout << "Hello " << name << "!" << std::endl << std::endl;

    if (age >= 18) {
        std::cout << "You are an adult." << std::endl << std::endl;
    }
    else {
        std::cout << "You are under 18." << std::endl;
        std::cout << "You have " << 18 - age << " years until adulthood." << std::endl << std::endl;
    }
    std::cout << "Thanks for using Age Verifier!" << std::endl;

    return 0;
}