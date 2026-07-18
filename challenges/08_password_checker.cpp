#include <iostream>
#include <string>

int main() {
    std::string password;

    std::cout << "==========================\n";
    std::cout << "   PASSWORD CHECKER\n";
    std::cout << "==========================\n\n";
    
    std::cout << "Enter your password:\n";
    std::cin >> password;
    std::cout << "\n";

    // .length() tells how many characters are there.
    if (password.length() >= 8) {
        std::cout << "Password is strong enough.\n\n";
    }
    else {
        std::cout << "Password is too short.\n\n";
    }
    
    std::cout << "Thanks for using Password Checker!\n";

    return 0;
}