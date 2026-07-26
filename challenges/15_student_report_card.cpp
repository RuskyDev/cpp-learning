#include <iostream>
#include <string>

int main() {
    std::string student_name;
    
    int math_marks;
    int english_marks;
    int science_marks;

    int maximum_marks = 300;
    
    std::cout << "==========================\n";
    std::cout << "    Student Report Card\n";
    std::cout << "==========================\n\n";
    
    std::cout << "Enter your name: \n";
    std::cin >> student_name;
    std::cout << "\n";

    std::cout << "==========================\n\n";

    std::cout << "Welcome, " << student_name << "\n\n";
    std::cout << "Enter your math marks: ";
    std::cin >> math_marks;
    std::cout << "\n";

    std::cout << "Enter your english marks: ";
    std::cin >> english_marks;
    std::cout << "\n";

    std::cout << "Enter your science marks: ";
    std::cin >> science_marks;
    std::cout << "\n";

    std::cout << "==========================\n\n";

    int total_marks = math_marks + english_marks + science_marks;
    int average_marks = total_marks / 3;

    std::cout << "Total: " << total_marks << "/" << maximum_marks << "\n";
    std::cout << "Average: " << average_marks << "\n\n";

    if (average_marks >= 90) {        
        std::cout << "Grade: A\n\n";

        std::cout << "Outstanding work!\n\n";
    }
    else if (average_marks >= 80) {
        std::cout << "Grade: B\n\n";

        std::cout << "Great job!\n\n";
    }
    else if (average_marks >= 70) {
        std::cout << "Grade: C\n\n";

        std::cout << "Good effort.\n\n";
    }
    else if (average_marks >= 60) {
        std::cout << "Grade: D\n\n";

        std::cout << "You passed.\n\n";
    }
    else {
        std::cout << "Grade: F\n\n";

        std::cout << "Keep practicing.\n\n"; 
    }
    std::cout << "==========================\n";

    return 0;
}