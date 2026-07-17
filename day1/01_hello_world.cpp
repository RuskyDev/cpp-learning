#include <iostream> // gives access to read and output library.

// main is the entry point of the function, 
// this is the main function, every C++ program starts executing here.

// int means the function will return an integer.
int main() {

    // std means standard and its a C++ standard library namespace.
    // cout means character output, it sends data to the console.
    // << is called stream insertation operator, it basically means send this to cout.
    // std::endl means end line and it also flushes the output buffer.

    // Examples:
    // Without std::endl;
    // Output of:
    // std::cout << "Hello";
    // std::cout << "World";
    // Will be:
    // HelloWorld

    // with std::endl;
    // Hello World 
    std::cout << "Hello World" << std::endl;
    //expected output is: "Hello world"
    return 0;
}