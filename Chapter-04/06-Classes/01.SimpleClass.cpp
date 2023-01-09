#include <iostream>


class ComplexNumber {
private:
    int real, complex;

public:
    void set(int r, int c) {
        real = r;
        complex = c;
    }
    void print() {
        std::cout << real << " + "
                  << complex << "j" << std::endl;
    }
};


int main() {
    ComplexNumber cn1, cn2;
    
    cn1.set(1, 2);
    cn2.set(5, 8);

    cn1.print();
    cn2.print();

    return 0;
}
