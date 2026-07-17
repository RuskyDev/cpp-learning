#include <iostream>
#include <string>

int main() {
    // Define varaibles which will store user data.
    std::string name;
    int age;

    // Print welcome message.
    std::cout << "Welcome!" << std::endl;

    // Ask first question.
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    
    std::cout << std::endl;

    // Ask second question.
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;

    std::cout << std::endl;

    // Show question's completed screen.
    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << "Welcome to C++!"; // << std::endl;
    //std::cout << "debug: " << age << std::endl;

    return 0;
}