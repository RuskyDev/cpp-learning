#include <iostream>
#include <string>

int main() {
    std::string username = "admin";
    std::string password = "2011";

    if (username == "admin" && password == "2010") {
        std::cout << "Login Successful.\n";
    }
    else {
        std::cout << "Invaild username or password.\n";
    }

    return 0;
}