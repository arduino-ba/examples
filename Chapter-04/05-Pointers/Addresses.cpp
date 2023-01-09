#include <iostream>


struct MyStructure {
    int x, y, z;
};


int main() {
    int int_value;
    float float_value;
    struct MyStructure my_structure;

    int *int_ptr = &int_value;
    float *float_ptr = &float_value;
    struct MyStructure *struct_ptr = &my_structure;

    std::cout << "INT is at       " << int_ptr << std::endl;
    std::cout << "FLOAT is at     " << float_ptr << std::endl;
    std::cout << "STRUCTURE is at " << struct_ptr << std::endl;

    std::cout << std::endl;

    struct MyStructure *new_structure = new struct MyStructure;
    std::cout << "New STRUCTURE is at " << new_structure << std::endl;

    return 0;
}
