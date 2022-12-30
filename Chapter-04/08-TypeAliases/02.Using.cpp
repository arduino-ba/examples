#include <iostream>

using Number = int;
using FunctionPtr = Number(*)(Number, Number);

Number add(Number a, Number b) {
    return a + b;
}
Number subtract(Number a, Number b) {
    return a - b;
}
Number multiply(Number a, Number b) {
    return a * b;
}
Number divide(Number a, Number b) {
    return a / b;
}

Number op(Number a, Number b, FunctionPtr func) {
    return func(a, b);
}

int main() {
    std::cout << "20 + 10 = " << op(20, 10, add) << std::endl;
    std::cout << "20 - 10 = " << op(20, 10, subtract) << std::endl;
    std::cout << "20 x 10 = " << op(20, 10, multiply) << std::endl;
    std::cout << "20 / 10 = " << op(20, 10, divide) << std::endl;

    return 0;
}