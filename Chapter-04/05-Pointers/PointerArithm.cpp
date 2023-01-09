#include <iostream>


int main() {
    int values[] = {1, 2, 3, 4, 5};
    
    
    int *int_ptr = &values[0];

    
    std::cout << "Output format = Address:Value "
              << std::endl << std::endl;
    
    
    std::cout << int_ptr << ":" << *int_ptr << std::endl;
    
    
    int_ptr++;
    std::cout << int_ptr << ":" << *int_ptr << std::endl;

    
    int_ptr += 1;
    std::cout << int_ptr << ":" << *int_ptr << std::endl;

    
    std::cout << int_ptr + 1 << ":" << *(int_ptr + 1) << std::endl;
    
    
    return 0;
}
