#include <iostream>
#include <limits>

class Calculate {
public:
    float add(float a, float b) {
        return a + b;
    }
    float subtract(float a, float b) {
        return a - b;
    }
    float multiply(float a, float b) {
        return a * b;
    }
    float divide(float a, float b) {
        return a / b;
    }
};

int main() {
    float a;
    float b;
    char operation;
    char answer;
    bool restart = true;

    while (restart) {
        // Input validation for the first number
        while (true) {
            std::cout << "\nEnter first number: ";
            std::cin >> a;
            if (std::cin.fail()) {
                std::cin.clear(); // clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
                std::cout << "\nInvalid input. Please enter a valid number.\n";
            } else {
                break; // valid input, exit loop
            }
        }

        // Input validation for the second number
        while (true) {
            std::cout << "Enter second number: ";
            std::cin >> b;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nInvalid input. Please enter a valid number.\n\n";
            } else {
                break; // valid input, exit loop
            }
        }

        bool operate = true;
        Calculate calc;

        while (operate) {
            std::cout << "\nChoose an operation [+ - * /]: ";
            std::cin >> operation;

            switch (operation) {
                case '+':
                    std::cout << "\nSum: " << calc.add(a, b) << std::endl;
                    operate = false;
                    break;
                case '-':
                    std::cout << "\nDifference: " << calc.subtract(a, b) << std::endl;
                    operate = false;
                    break;
                case '*':
                    std::cout << "\nProduct: " << calc.multiply(a, b) << std::endl;
                    operate = false;
                    break;
                case '/':
                    if (b == 0) {
                        std::cout << "Error: Division by zero is undefined.\n";
                    } else {
                        std::cout << "\nQuotient: " << calc.divide(a, b) << std::endl;
                        operate = false;
                    }
                    break;
                default:
                    std::cout << "\nInvalid operation. Please try again.\n";
                    break;
            }
        }

        std::cout << "\nContinue? [y/n]: ";
        std::cin >> answer;

        if (toupper(answer) == 'Y') {
            restart = true;
        } else if (toupper(answer) == 'N') {
            std::cout << "\n";
            restart = false;
        } else {
            std::cout << "\nInvalid input. Exiting program.\n\n";
            restart = false;
        }
    }

    return 0;
}
