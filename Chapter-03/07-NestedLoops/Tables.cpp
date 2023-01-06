#include <iostream>


int main() {
    int table;

    
    while (1) {
        
        std::cout << "Table of what? (0 or negative to exit) ";
        std::cin >> table;

        
        if (table <= 0) break;

        
        for (int n = 1; n <= 10; n++) {
            
            std::cout << table << " x " << n << " = "
                      << table * n << std::endl;
            
        }
    }
    
    
    return 0;
}
