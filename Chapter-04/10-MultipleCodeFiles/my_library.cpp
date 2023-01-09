#include <iostream>


using namespace std;


int get_number_from_user() {
    int value;
    cin >> value;
    return value;
}

void print_table(int t) {
    for (int i = 1; i <= 10; i++) {
        cout << t << " x "
             << i << " = "
             << t * i << endl;
    }
}
