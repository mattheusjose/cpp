#include <iostream>

int main() {

    std::cout << "Type the temperature in Fº: ";
    float fahrenheit(0.0);
    std::cin >> fahrenheit;

    float celcius = 5 * ((fahrenheit - 32) / 9);

    std::cout << fahrenheit << "Fº = "<< celcius << "Cº" << std::endl;
    return 0;
}