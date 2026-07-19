#include <iostream>

int main() {
    int score;

    std::cout << "==========================\n";
    std::cout << "      GRADE CHECKER\n";
    std::cout << "==========================\n\n";

    std::cout << "Enter your exam score:\n";
    std::cin >> score;
    std::cout << "\n";
    std::cout << "==========================\n\n";

    if (score >= 90) {
        std::cout << "Grade: A\n";
        std::cout << "Excellent work!\n\n";
    }
    else if (score >= 80) {
        std::cout << "Grade: B\n";
        std::cout << "Great job!\n\n";
    }
    else if (score >= 70) {
        std::cout << "Grade: C\n";
        std::cout << "Good job!\n\n";
    }
    else if (score >= 60) {
        std::cout << "Grade: D\n";
        std::cout << "You passed, but there's room for improvement.\n\n";
    }
    else if (score < 60) {
        std::cout << "Grade: F\n";
        std::cout << "Keep practicing!\n\n";
    }

    std::cout << "Thanks for using Grade Checker!\n";
    return 0;
}