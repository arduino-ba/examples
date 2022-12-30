#include <iostream>

using namespace std;

namespace ns1 {
    namespace ns2 {
        void print_hello_1() {
            cout << "Hello World 1" << endl;
        }
    }

    void print_hello_2() {
        cout << "Hello World 2" << endl;
    }
}

int main() {
    ns1::ns2::print_hello_1();
    ns1::print_hello_2();
}