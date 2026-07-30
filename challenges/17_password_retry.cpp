#include <iostream>
#include <string>

int main() {
    std::string password;
    std::string correctPassword = "2010";

    while (password != correctPassword) {
        std::cout << "Enter password: ";
        std::cin >> password;
        std::cout << "\n";

        if (password == correctPassword) {
            std::cout << "Access granted.\n";
        } else {
            std::cout << "Wrong password.\n\n";
        }
    }

    return 0;
}