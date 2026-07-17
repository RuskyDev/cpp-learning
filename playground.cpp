#include <iostream>

int main() {
    //std::cout << 10 + 5 << std::endl;
    //expected output:
    // 15

    // std::cout << "10" << 5 << std::endl;
    // i thought that 5 might cause a error because it wasent wrapped around in a "" and 10 will show becuase it was wrapped in "10" buit when i ran it it showed 105 whats the reasoning on that?
    // later i discovered std::cout already knows how to handle these data types.
    // even if i pass in something like:
    // std::cout << 10 << 5 << std::endl;
    // it will return 105.
    // very simple.

    // if we don't use std::endl; in this
    //std::cout << "Hello world" << std::endl;
    // it won't print it in a new line and print it in the same line.

    return 0;
}