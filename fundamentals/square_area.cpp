#include <iostream>

int squareArea(int base) {

    return base * base;
}

int main() {

    std::cout << "Type the base of the square in cm: ";
    int base = 0;
    std::cin >> base;

    int area = squareArea(base);

    std::cout << "Square with base "<< base << "cm has "<< area << "cm²" << std::endl;
    return 0;
}