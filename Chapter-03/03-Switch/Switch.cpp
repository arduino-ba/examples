#include <iostream>


int main() {
    int option;

    std::cout << "What do you want to see?" << std::endl;
    std::cout << "  1 = Binaries" << std::endl;
    std::cout << "  2 = Logging" << std::endl;
    std::cout << "  3 = Data" << std::endl;
    std::cout << "  4 = Support" << std::endl;
    std::cout << "Give me a number: ";
    std::cin >> option;

    
    switch (option) {
        case 1:
            
            std::cout << "Displaying Binaries" << std::endl;
            
            break;
            
        case 2:
            
            std::cout << "Displaying Logs" << std::endl;
            
            break;
            
        case 3:
            
            std::cout << "Displaying Data" << std::endl;
            
            break;
            
        case 4:
            
            std::cout << "Displaying Support Info" << std::endl;
            
            break;
            
        default:
            
            std::cout << "Invalid option" << std::endl;
            
            break;
    }
    
    return 0;
}
