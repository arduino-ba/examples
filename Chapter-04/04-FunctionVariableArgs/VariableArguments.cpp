#include <iostream>
#include <stdarg.h>


int sum_all(int total_args, ...) {
    va_list args_list;

    // Starting the list from last argument
    // i.e., total_args
    va_start(args_list, total_args);

    int sum = 0;
    
    for(int i = 0; i < total_args; i++) {
        
        sum += va_arg(args_list, int);
        
    }
    
    va_end(args_list);

    return sum;
}


int main() {
    int sum;

    sum = sum_all(5, 1, 2, 3, 4, 5);
    std::cout << "Sum = " << sum << std::endl;

    sum = sum_all(8, 1, 2, 3, 4, 5, 6, 7, 8);
    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
