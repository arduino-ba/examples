#include <iostream>

int main() {
    int table;

    std::cout << "Table of what? ";
    std::cin >> table;

    for (int n = 1; n <= 10; n++) {
        std::cout << table << " x " << n << " = "
                  << table * n << std::endl;
    }

    return 0;
}