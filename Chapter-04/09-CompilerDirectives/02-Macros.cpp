#include <iostream>

using namespace std;

int function_add(int v1, int v2) { return v1 + v2; }
int function_sub(int v1, int v2) { return v1 - v2; }
int function_mul(int v1, int v2) { return v1 * v2; }
int function_div(int v1, int v2) { return v1 / v2; }

#define V1   20
#define V2   10
#define op(number,value1,value2)  function_##number(value1,value2)

int main() {
    cout << V1 << " + " << V2 << " = " << op(add, V1, V2) << endl;
    cout << V1 << " - " << V2 << " = " << op(sub, V1, V2) << endl;
    cout << V1 << " x " << V2 << " = " << op(mul, V1, V2) << endl;
    cout << V1 << " / " << V2 << " = " << op(div, V1, V2) << endl;

    return 0;
}
