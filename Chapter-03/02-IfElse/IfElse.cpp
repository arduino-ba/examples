#include <iostream>


int main() {
    int age;

    std::cout << "What is your age? ";
    std::cin >> age;

    
    if (age < 0) {
        
        std::cout << "Age cannot be negative." << std::endl;
        
    } else if (age == 0) {
        
        std::cout << "Are you just born?" << std::endl;
        
    } else if (age <= 10) {
        
        std::cout << "Let us play" << std::endl;
        
    } else if (age <= 20) {
        
        std::cout << "Let us study" << std::endl;
        
    } else {
        
        std::cout << "Enjoy!" << std::endl;
        
    }
    
    
    return 0;
}
