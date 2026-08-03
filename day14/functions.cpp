#include <iostream>
#include <string>

// void means return nothing.
// greet is function name
// name is a paramter.

// Will return:
// Hello, (what ever user passed in the name paramter)!

// void greet(std::string name) {
//      std::cout << "Hello, " << name << "!\n";
// }

// Will return:
// Hello, (whatever user passed argurment in greet("") and will whatever user passed argument after greet("", ""))
// void greet(std::string firstName, std::string lastName) {
//      std::cout << "Hello, " << firstName << " " << lastName << "!\n";
// }

// int means to return a value, it creates 2 paramters both are integers: a and b and returns them by summing them.
int add(int a, int b) {
    return a + b;
}

int main() {
    // greet("Ayaan", "Ali");

    //will return 4
    std::cout << add(2, 2) << "\n";
    return 0;
}