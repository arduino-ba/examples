#include <iostream>


int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}


int op(int a, int b, int(*func)(int, int)) {
    return func(a, b);
}


int main() {
    std::cout << "20 + 10 = " << op(20, 10, add) << std::endl;
    std::cout << "20 - 10 = " << op(20, 10, subtract) << std::endl;
    std::cout << "20 x 10 = " << op(20, 10, multiply) << std::endl;
    std::cout << "20 / 10 = " << op(20, 10, divide) << std::endl;

    return 0;
}
