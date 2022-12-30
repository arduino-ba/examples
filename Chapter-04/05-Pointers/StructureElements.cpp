#include <iostream>

struct MyStructure {
    int x, y, z;
};

int main() {
    struct MyStructure my_structure;
    my_structure.x = 10;
    my_structure.y = 20;
    my_structure.z = 30;

    std::cout << "Original structure: " << std::endl
              << "  x = " << my_structure.x << std::endl
              << "  y = " << my_structure.y << std::endl
              << "  z = " << my_structure.z << std::endl
              << std::endl;

    struct MyStructure *struct_ptr = &my_structure;

    std::cout << "Members accessed through pointer: " << std::endl
              << "  x = " << struct_ptr->x << std::endl
              << "  y = " << struct_ptr->y << std::endl
              << "  z = " << struct_ptr->z << std::endl
              << std::endl;

    std::cout << "Updating values using pointer" << std::endl;
    struct_ptr->x = 100;
    struct_ptr->y = 200;
    struct_ptr->z = 300;

    std::cout << "Members accessed through pointer: " << std::endl
              << "  x = " << struct_ptr->x << std::endl
              << "  y = " << struct_ptr->y << std::endl
              << "  z = " << struct_ptr->z << std::endl
              << std::endl;

    std::cout << "Updated structure: " << std::endl
              << "  x = " << my_structure.x << std::endl
              << "  y = " << my_structure.y << std::endl
              << "  z = " << my_structure.z << std::endl
              << std::endl;
    
    return 0;
}