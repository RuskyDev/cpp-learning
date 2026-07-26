#include <iostream>

int main() {
    int input;
    
    std::cout << "==========================\n";
    std::cout << "Temperature Checker\n";
    std::cout << "==========================\n\n";

    std::cout << "Please enter a temperature: ";
    std::cin >> input;
    std::cout << "\n";

    std::cout << "==========================\n";

    if (input < 0) {
        std::cout << "Freezing\n\n";
    }
    else if (input <= 15) {
        std::cout << "Cold\n\n";
    }
    else if (input <= 25) {
        std::cout << "Warm\n\n";
    }
    else {
        std::cout << "Hot\n\n";
    }
    std::cout << "Thanks for using Temperature Checker.\n";

    return 0;
}