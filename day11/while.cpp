#include <iostream>

int main() {
    int isUserAdmin = true;
    int printed_3;

    while (isUserAdmin) {
        if (printed_3 == 3) {
            std::cout << "OK";
            break;
        } else {
            std::cout << "executed +1";
            printed_3++;
        }
    }
}
// this probably doesn't work as intended.
