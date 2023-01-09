#include <iostream>


using namespace std;


int main() {
    
    int my_array[] = {
        
        #include "values.csv"
        
    };

    
    for (int i = 0;
         i < sizeof(my_array)/sizeof(int);
         i++) {
        
        cout << my_array[i] << " - ";
        
    }

    
    cout << endl;
    
    return 0;
}
