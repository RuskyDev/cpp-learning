#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    double height;
    char favorite_letter;
    bool likes_cpp;

    std::cout << "=================================" << std::endl;
    std::cout << "Welcome to Character Creator!" << std::endl;
    std::cout << "=================================" << std::endl;
    std::cout << std::endl;

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << std::endl;

    std::cout << "How old are you?" << std::endl;
    std::cin >> age;
    std::cout << std::endl;

    std::cout << "What is your height?" << std::endl;
    std::cin >> height;
    std::cout << std::endl;

    std::cout << "What is your favorite letter?" << std::endl;
    std::cin >> favorite_letter;
    std::cout << std::endl;

    std::cout << "Do you like C++?" << std::endl;
    std::cin >> likes_cpp;

    std::cout << std::endl;

    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "Your height is " << height << "." << std::endl;
    std::cout << "Your favorite letter is " << favorite_letter << "." << std::endl;
    std::cout << "Likes C++: " << likes_cpp << std::endl;
    
    std::cout << std::endl;

    std::cout << "Thanks for using Character Creator!" << std::endl;

    return 0;
}