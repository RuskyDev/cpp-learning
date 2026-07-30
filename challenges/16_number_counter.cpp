#include <iostream>

int main() {
    int number;
    int current = 0;

    std::cout << "==========================\n";
    std::cout << "     NUMBER COUNTER\n";
    std::cout << "==========================\n\n";
    
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "\n";

    std::cout << "==========================\n\n";
    

    // Logic:
    // It will run in an loop checking if current is not equal to number.
    // And it will keep increasing current by +1
    // And it will keep printing current every time the condtion runs.

    while (current != number) {
        current++;
        std::cout << current << "\n";
    }

    std::cout << "\n";
    std::cout << "Thanks for using Number Counter!\n";

    return 0;
}