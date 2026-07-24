#include <iostream>
#include <string>

int main() {
    std::string username;
    std::string password;
    std::string role = "admin";
    bool isBanned = false;

    std::cout << "==========================\n";
    std::cout << " WEBSITE ACCESS CHECKER\n";
    std::cout << "==========================\n\n";

    std::cout << "Checking credentials...\n\n";
    std::cout << "==========================\n\n";

    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "\n";

    std::cout << "Enter your password: ";
    std::cin >> password;
    std::cout << "\n";

    std::cout << "==========================\n\n";

    if (username == "rusky" && password == "2010") {
            if (!isBanned || role == "admin") {
                if (role == "admin") {
                    std::cout << "Login successful.\n";
                    std::cout << "Account status: Active.\n";
                    std::cout << "Admin panel access granted.\n\n";
                }
                else {
                    std::cout << "Login successful.\n";
                    std::cout << "Account status: Active.\n";
                    std::cout << "Admin panel access denied.\n\n";
                }
            }
            else {
                std::cout << "Login successful.\n";
                std::cout << "Your account is banned.\n\n";
            }
    }
    else {
        std::cout << "Invaild username or password\n\n";
    }
    std::cout << "Thanks for using Website Access Checker!\n";
    return 0;
}