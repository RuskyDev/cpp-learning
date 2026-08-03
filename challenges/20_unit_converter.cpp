#include <iostream>
#include <string>

double KMToMiles(double km) {
    return km / 1.60934;
}

double MilesToKM(double miles) {
    return miles * 1.60934;
}

double CelsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double FahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

void printTitle() {
    std::cout << "==========================\n";
    std::cout << "     UNIT CONVERTER\n";
    std::cout << "==========================\n\n";
}

void printMenu() {
    std::cout << "1. KM to Miles\n";
    std::cout << "2. Miles to KM\n";
    std::cout << "3. Celsius to Fahrenheit\n";
    std::cout << "4. Fahrenheit to Celsius\n";
    std::cout << "5. Exit\n\n";
}

void printUnitConvertFromTo(std::string from, std::string to) {
    std::cout << "==========================\n";
    std::cout << "     UNIT CONVERTER\n";
    std::cout << "      (" << from << " to " << to << ")\n";
    std::cout << "==========================\n\n";
}

int main() {
    std::string choice;

    double from;

    while (true) {
        printTitle();
        printMenu();

        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << "\n";

        if (choice == "1") {
            printUnitConvertFromTo("KM", "Miles");

            std::cout << "Enter KM: ";
            std::cin >> from;
            std::cout << "\n";

            std::cout << "Result: " << from << " KM " << "= " << KMToMiles(from) << " Miles" << "\n\n";
        }
        else if (choice == "2") {
            printUnitConvertFromTo("Miles", "KM");

            std::cout << "Enter Miles: ";
            std::cin >> from;
            std::cout << "\n";

            std::cout << "Result: " << from << " Miles " << "= " << MilesToKM(from) << " KM" << "\n\n";
        }
        else if (choice == "3") {
            printUnitConvertFromTo("°C", "°F");

            std::cout << "Enter Celsius: ";
            std::cin >> from;
            std::cout << "\n";

            std::cout << "Result: " << from << "°C " << "= " << CelsiusToFahrenheit(from) << "°F" << "\n\n";
        }
        else if (choice == "4") {
            printUnitConvertFromTo("°F", "°C");

            std::cout << "Enter Fahrenheit: ";
            std::cin >> from;
            std::cout << "\n";

            std::cout << "Result: " << from << "°F " << "= " << FahrenheitToCelsius(from) << "°C" << "\n\n";
        }
        else if (choice == "5") {
            break;
        }
        else {
            std::cout << "Invalid choice.\n";
        }
    }
    return 0;
}