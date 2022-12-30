#include <iostream>

int main() {
    int int_value = 10;

    int *int_ptr = &int_value;
    
    std::cout << "INT is at "     << int_ptr
              << " having value " << *int_ptr
              << std::endl << std::endl;

    std::cout << "Updating value through pointer" << std::endl;
    *int_ptr = 20;

    std::cout << "Now, pointed value = " << *int_ptr << std::endl;
    std::cout << "and, variable value = " << int_value << std::endl;

    return 0;
}