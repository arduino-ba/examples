#include <iostream>

int main() {
    int table;

    std::cout << "Table of what? ";
    std::cin >> table;

    int n = 1;
    while (n <= 10) {
        std::cout << table << " x " << n << " = "
                  << table * n << std::endl;
        n++;
    }

    return 0;
}