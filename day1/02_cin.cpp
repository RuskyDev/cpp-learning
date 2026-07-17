#include <iostream>
#include <string> // gives us access to std::string
                  // which is a type used to store text.

int main() {

    // We are using std which is C++ standard library.
    // string is a data type that stores text.

    // We are creating a variable named 'name' of type std::string
    std::string name;

    // We are passing a string to cout, which will make it print "What is your name?" in console.
    std::cout << "What is your name? ";

    // cin takes data from the keyboard.
    // >> is called stream extraction operator which means:
    // take data from input stream and store it in a variable.

    // this line waits for user to type
    // read what they said
    // stores it inside name variable.

    // eg,. if user typed Rusky then the varaible will store Rusky inside.

    std::cin >> name;
    // this will enter a new line.
    std::cout << std::endl;
    // this will return whatever user entered.

    // eg,. Your name is: Ayaan
    std::cout << "Your name is: " << name << std::endl;

    return 0;
}