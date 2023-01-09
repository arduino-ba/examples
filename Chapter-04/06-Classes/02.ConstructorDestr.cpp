#include <iostream>


class ComplexNumber {
private:
    int real, complex;

public:
    ComplexNumber(int r, int c) {
        real = r;
        complex = c;
    }
    
    void print() {
        std::cout << real << " + "
                  << complex << "j" << std::endl;
    }

    ~ComplexNumber() {
        std::cout << "Destroying: "
                  << real << " + "
                  << complex << "j" << std::endl;
    }
};


int main() {
    ComplexNumber cn1(1, 2), cn2(5, 8);

    cn1.print();
    cn2.print();

    return 0;
}
