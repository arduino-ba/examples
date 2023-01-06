#include <iostream>


int main() {
    int value;

    std::cout << "Enter 5 to exit: " << std::endl;

    
    do {
        
        std::cout << "  Value?: ";
        std::cin >> value;
        
    } while (value != 5);
    
    
    return 0;
}
