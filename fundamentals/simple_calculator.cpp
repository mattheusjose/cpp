#include <iostream>


float pow(float number, int power) {

    if (power == 0) return 1;

    return number * pow(number, power - 1);
}

int main() {

    std::cout << "Type the first integer: ";
    int integer1(0);
    std::cin >> integer1;

    std::cout << "Type the second integer: ";
    int integer2(0);
    std::cin >> integer2;

    std::cout << "Type the first decimal number: ";
    float decimal1(0.0);
    std::cin >> decimal1;

    int result1 = integer1 * 2 * integer2 / 2;
    float result2 = integer1 * 3 + decimal1;
    float result3 = pow(decimal1, 3);

    std::cout << "result 1: "<< result1 << std::endl;
    std::cout << "result 2: "<< result2 << std::endl;
    std::cout << "result 3: "<< result3 << std::endl;
}