#include <iostream>


void send(int number);
void send(long long number);
void send(float number);
void send(double number);


int main() {
    int       intNumber = 10;
    long long longlongNumber = 20;
    float     floatNumber = 30.f;
    double    doubleNumber = 40.0;
    
    send(intNumber);
    send(longlongNumber);
    send(floatNumber);
    send(doubleNumber);

    return 0;
}


void send(int number) {
    std::cout << "Sending INTEGER " << number << std::endl;
}

void send(long long number) {
    std::cout << "Sending LONG LONG " << number << std::endl;
}

void send(float number) {
    std::cout << "Sending FLOAT " << number << std::endl;
}

void send(double number) {
    std::cout << "Sending DOUBLE " << number << std::endl;
}
