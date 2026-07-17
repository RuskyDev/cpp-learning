#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string age;

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;

    std::cout << std::endl;
    
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;

    std::cout << std::endl;

    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}