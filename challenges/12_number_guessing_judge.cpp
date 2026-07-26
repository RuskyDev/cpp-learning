#include <iostream>

int main() {
    int correctNumber = 50;
    int input;

    std::cout << "==========================\n";
    std::cout << "Number Guessing Judge\n";
    std::cout << "==========================\n\n";

    std::cin >> input;
    std::cout << "\n";
    
    std::cout << "==========================\n\n";

    if (input == correctNumber) {
        std::cout << "Correct!\n\n";
    }
    else if (input > correctNumber) {
        std::cout << "Too High.\n\n";
    }
    else {
        std::cout << "Too Low.\n\n";
    }
    std::cout << "Thanks for playing Number Guessing Judge\n";

    return 0;
}