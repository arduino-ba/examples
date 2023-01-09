#include <iostream>


int main() {
    int int_value = 0x00FFEEDD;
    double double_value = 3.14159;
    unsigned char *ptr;

    
    
    // Integer's bytes:
    ptr = (unsigned char *)&int_value;

    std::cout << int_value << " is placed in memory as: ";

    for (int i = 0; i < sizeof(int_value); i++) {
        std::cout << std::hex << (int)*ptr++ << " ";
    }

    
    
    std::cout << std::endl;

    
    
    // Double's bytes:
    ptr = (unsigned char *)&double_value;

    std::cout << double_value << " is placed in memory as:  ";

    for (int i = 0; i < sizeof(double_value); i++) {
        std::cout << std::hex << (int)*ptr++ << " ";
    }

    
    
    std::cout << std::endl;
    
    
    
    return 0;
}
