
// Create variables without asking the user.

// Expected output:
// ===== About Me =====

// Name: Ayaan
// Age: 16
// Height: 5.9
// Initial: A
// Likes C++: 1

#include <iostream>
#include <string>

int main() {
    std::string name = "Ayaan";
    int age = 15;
    double height = 5.11;
    char initial = 'A';
    bool likes_cpp = true;

    std::cout << "===== About Me =====" << std::endl;
    std::cout << std::endl;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Likes C++: " << likes_cpp << std::endl;

    return 0;
}