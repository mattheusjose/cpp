#include <iostream>

int main() {

    std::cout << "Type the temperature in Cº: ";
    float celsius(0.0);
    std::cin >> celsius;

    float fahrenheit = celsius * 9 / 5 + 32;

    std::cout << celsius << "Cº = "<< fahrenheit << "Fº" << std::endl;

    return 0;
}