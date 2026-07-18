//Expected output:
// ========== RECEIPT ==========

// Customer: Ayaan

// Burger Price: 450
// Fries Price: 200
// Drink Price: 150

// Total: 800

// Thank you!

// =============================

#include <iostream>
#include <string>

int main() {
    std::string customer_name = "Ayaan";

    int burger_price = 450;
    int fries_price = 200;
    int drink_price =  150;

    std::cout << "========== RECEIPT ==========" << std::endl << std::endl;
    std::cout << "Customer: " << customer_name << std::endl << std::endl;
    std::cout << "Burger Price: " << burger_price << std::endl;
    std::cout << "Fries Price: " << fries_price << std::endl;
    std::cout<< "Drink Price: " << drink_price << std::endl << std::endl;

    std::cout << "Total: " << burger_price + fries_price + drink_price << std::endl << std::endl;
    std::cout << "Thank you!" << std::endl << std::endl;

    std::cout << "=============================" << std::endl;

    return 0;
}