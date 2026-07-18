#include <iostream>

// formulas used:
// Area = width * height
// Perimeter = 2 * (width + height)

int main() {
    int width;
    int height;

    std::cout << "==========================\n";
    std::cout << "  RECTANGLE CALCULATOR\n";
    std::cout << "==========================\n\n";

    std::cout << "Enter width:\n";
    std::cin >> width;
    std::cout << "\n";
    
    std::cout << "Enter height:\n";
    std::cin >> height;
    std::cout << "\n";

    std::cout << "==========================\n\n";

    std::cout << "Area: " << width * height << "\n";
    std::cout << "Perimeter: " << 2 * (width + height) << "\n\n";
    
    std::cout << "Thanks for using Rectangle Calculator!\n";

    return 0;
}