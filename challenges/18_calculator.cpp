#include <iostream>

int main() {
   while (true) {
    int main_menu_choice;

    int first_number;
    int second_number;

    std::cout << "==========================\n";
    std::cout << "     Calculator\n";
    std::cout << "==========================\n\n";

    std::cout << "1. Add\n";
    std::cout << "2. Subtract\n";
    std::cout << "3. Multiply\n";
    std::cout << "4. Divide\n";
    std::cout << "5. Exit\n\n";

    std::cout << "Choice: ";
    std::cin >> main_menu_choice;
    std::cout << "\n";

    std::cout << "==========================\n\n";

    if (main_menu_choice == 1) {
        std::cout << "Enter first number: ";
        std::cin >> first_number;
        std::cout << "\n";

        std::cout << "Enter second number: ";
        std::cin >> second_number;
        std::cout << "\n";
            
        std::cout << "==========================\n\n";

        std::cout << "Answer: " << first_number + second_number << "\n\n";
    } else if (main_menu_choice == 2) {
        std::cout << "Enter first number: ";
        std::cin >> first_number;
        std::cout << "\n";

        std::cout << "Enter second number: ";
        std::cin >> second_number;
        std::cout << "\n";
            
        std::cout << "==========================\n\n";

        std::cout << "Answer: " << first_number - second_number << "\n\n";
    } else if (main_menu_choice == 3) {
        std::cout << "Enter first number: ";
        std::cin >> first_number;
        std::cout << "\n";

        std::cout << "Enter second number: ";
        std::cin >> second_number;
        std::cout << "\n";
            
        std::cout << "==========================\n\n";

        std::cout << "Answer: " << first_number * second_number << "\n\n";
    } else if (main_menu_choice == 4) {
        double first_number;
        double second_number;

        std::cout << "Enter first number: ";
        std::cin >> first_number;
        std::cout << "\n";

        std::cout << "Enter second number: ";
        std::cin >> second_number;
        std::cout << "\n";
            
        std::cout << "==========================\n\n";

        std::cout << "Answer: " << first_number / second_number << "\n\n";
    } else if (main_menu_choice == 5) {
        std::cout << "Thank you for using Calculator.\n";
        break;
    } else {
        std::cout << "Invaild choice.\n\n";
    }
   }
    return 0;
}