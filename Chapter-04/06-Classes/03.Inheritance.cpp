#include <iostream>

class Object {
private:
    int x, y;

protected:
    Object(int x_value, int y_value) {
        x = x_value;
        y = y_value;
    }
    int get_x() { return x; }
    int get_y() { return y; }
};

class Box : public Object {
private:
    int w, h;
public:
    Box(int x, int y, int width, int height):Object(x, y){
        w = width;
        h = height;
    }
    void draw() {
        std::cout << "Box: at "
                  << get_x() << "," << get_y()
                  << " - "
                  << w << "x" << h << std::endl;
    }
};

int main() {
    Box b1(1, 2, 5, 5), b2(5, 9, 8, 8);
    b1.draw();
    b2.draw();

    return 0;
}