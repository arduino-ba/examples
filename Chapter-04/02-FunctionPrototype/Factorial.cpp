#include <iostream>

int factorial(int number);

int main() {
    int value;
    while (1) {
        std::cout << "Factorial of? (0 or negative to exit) ";
        std::cin >> value;

        if (value <= 0) break;

        std::cout << "  " << value << "! = "
                  << factorial(value) << std::endl;
    }
    
    return 0;
}

int factorial(int number) {
    if (number <= 1) return 1;
    return number * factorial(number - 1);
}