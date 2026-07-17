#include <iostream>
#include <string>

int main() {
    
    // std::string stands for string, it can store any type of text.
    std::string name = "Ayaan";

    // this will return what age has stored. eg,. Ayaan
    std::cout << name << std::endl;

    // int stands for integer and it can only store whole numbers, (no decimal point)
    int age = 16;

    // this will return what age has stored. eg,. 16
    std::cout << age << std::endl;

    // double stores decimal numbers.
    double height = 7.5;

    // this will return what height has stored. eg,. 7.5
    std::cout << height << std::endl;
    
    // char stores only 1 character
    // value of char varaible must be written around '' instead of ""
    char grade = 'A';

    // this will return what grade has stored. eg,. A
    std::cout << grade << std::endl;

    // bool means boolean.
    // can ony store true or false.
    bool is_noob = true;

    // this will return what is_noob has stored. eg,. 1
    // idk how to make it print true or false right now
    // true is 1
    // false is 0
    std::cout << is_noob << std::endl;

    return 0;
}