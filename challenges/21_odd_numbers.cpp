#include <iostream>

int main() {
    // It will start i at 1 and will loop till 99 and every iteration it will increment i by 1.
    for (int i = 1; i <= 99; i++) {
        // It will divide i with 2 and will check if there is a remainder remaining and if doesn't divide fully fit eg,. 5 % 2 equals 1 because 2 fits into 5 twice with 1 left over.
        if (i % 2 != 0) {
            // Return each odd number.
            std::cout << i << "\n";
        }
    }

    return 0;
}