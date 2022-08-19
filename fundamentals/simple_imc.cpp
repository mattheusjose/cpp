#include <iostream>

int main() {

    float height = 0;

    std::cout << "Type your height: ";
    std::cin >> height;

    float imc = (72.8 * height) - 58;

    std::cout << "height: "<< height << "m²" << std::endl;
    std::cout << "imc: "<< imc << std::endl;
    return 0;
}