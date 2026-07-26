#include <iostream>

int main() {
    int age;
    bool hasTicket;

    std::cout << "==========================\n";
    std::cout << "Movie Ticket Checker\n";
    std::cout << "==========================\n\n";
    
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << "\n";

    std::cout << "Do you have a ticket? ";
    std::cin >> hasTicket; // User needs to enter 0 for false or 1 for true.
    std::cout << "\n";

    std::cout << "==========================\n\n";
    
    if (age >= 13 && hasTicket) {
        std::cout << "You can watch the movie.\n\n";
    }
    else if (!hasTicket) {
        std::cout << "You need a ticket to watch this movie.\n\n";
    }  
    else {
        std::cout << "You must be at least 13 years old to watch this movie.\n\n";
    }

    std::cout << "Thank you for using Movie Ticket Checker.\n";

    return 0;
}