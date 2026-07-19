#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: \n";
    std::cin >> name;
    std::cout << "\n";

    std::cout << "Enter your age: \n";
    std::cin >> age;
    std::cout << "\n";

    if (age >= 18) {
        std::cout << "You are an adult.\n";
    }
    else {
        std::cout << "You are under 18.\n\n";
    }
    std::cout << "Good Bye!\n";
    
    return 0;
}