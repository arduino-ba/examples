#include <iostream>

typedef int Integer;
typedef Integer(*FunctionPtr)(Integer, Integer);

Integer add(Integer a, Integer b) {
    return a + b;
}
Integer subtract(Integer a, Integer b) {
    return a - b;
}
Integer multiply(Integer a, Integer b) {
    return a * b;
}
Integer divide(Integer a, Integer b) {
    return a / b;
}

Integer op(Integer a, Integer b, FunctionPtr func) {
    return func(a, b);
}

int main() {
    std::cout << "20 + 10 = " << op(20, 10, add) << std::endl;
    std::cout << "20 - 10 = " << op(20, 10, subtract) << std::endl;
    std::cout << "20 x 10 = " << op(20, 10, multiply) << std::endl;
    std::cout << "20 / 10 = " << op(20, 10, divide) << std::endl;

    return 0;
}