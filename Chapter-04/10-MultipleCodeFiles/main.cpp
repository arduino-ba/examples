#include <iostream>
#include "my_library.h"

using namespace std;

int main() {
    int table;

    do {
        cout << "Which table do you want? (0 or -ve to exit) ";
        table = get_number_from_user();

        if (table <= 0) break;

        print_table(table);
    } while (1);
}