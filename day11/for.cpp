#include <iostream>

int main() {
    // int current = 1;

    // Keep running till current becomes 5.
    // And print current value every time it runs.
    // Increase current by 1 everytime it runs.

    //Expected output:
    //1
    //2
    //3
    //4
    //5

    // while (current <= 5 ) {
    //     std::cout << current << "\n";
    //     current++;
    // }

    // Structure:
    // for (start; keep running while; after each iteration) {
    // ...
    // }

    // for (int current = 1; current <= 5; current++) {
    //     std::cout << current << "\n";
    // }

    // Start i at 1.
    // Keep running while i is less than or equal to 100.
    // After each iteration, increase i by 1.

    // for (int i = 1; i <= 100; i++) {
    //     std::cout << i << "\n";
    // }

    // for (int i = 100; i >= 1; i--) {
    //     std::cout << i << "\n";
    // }

    // for (int i = 2; i <= 100; i += 2) {
    //     std::cout << i << "\n";
    // }

    // for (int i = 1; i <= 3; i++) {
    //     std::cout << "*****\n";
    // }

    int rows = 3;
    int stars = 5;

    for (int i = 1; i <= 3; i++) {
        for (int i = 1; i <= 5; i++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}