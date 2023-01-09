#include <iostream>


class Object {
public:
    virtual void draw() {
        std::cout << "Object draw" << std::endl;
    }
};


class Box : public Object {
public:
    void draw() override {
        std::cout << "Box draw" << std::endl;
    }
};


int main() {
    Object *ptr1, *ptr2;
    
    ptr1 = new Object();
    ptr2 = new Box();

    ptr1->draw();
    ptr2->draw();

    return 0;
}
