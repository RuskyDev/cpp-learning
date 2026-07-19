#include <iostream>
#include <string>

int main() {
    std::string username = "rusky";
    std::string password = "20110";
    std::string role = "member";    
    bool isBanned = false;
    
    std::cout << "==========================\n";
    std::cout << " WEBSITE ACCESS CHECKER\n";
    std::cout << "==========================\n\n";

    std::cout << "Checking credentials...\n\n";
    std::cout << "==========================\n\n";

    if (username == "rusky" && password == "2010" && role != "admin" && isBanned != 1) {
        std::cout << "Login successful.\n";
        std::cout << "Account status: Active.\n";
        std::cout << "Admin panel access denied.\n\n";
    }
    else if (username == "rusky" && password == "2010" && role == "admin") {
        std::cout << "Login successful.\n";
        std::cout << "Account status: Active.\n";
        std::cout << "Admin panel access granted.\n\n";
    }
    else if (username == "rusky" && password == "2010" && role != "admin" && isBanned == 1) {
        std::cout << "Login successful.\n";
        std::cout << "Your account is banned.\n\n";
    }
    else {
        std::cout << "Invalid username or password.\n\n";
    }

    std::cout << "Thanks for using Website Access Checker!\n";
    return 0;
}