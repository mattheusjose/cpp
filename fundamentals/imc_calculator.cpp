#include <iostream>
#include <string>

float womanImc(float height) {

    float imc = (62.1 * height) - 44.7;
    return imc;
}

float manImc(float height) {

    float imc = (72.7 * height)- 58;
    return imc;
}

int main() {

    float height = 0;
    std::string gender = "";


    std::cout << "Type your gender (M/F): ";
    std::cin >> gender;
    std::cin.ignore();

    std::cout << "Type your height: ";
    std::cin >> height;

    auto handler = gender == "M" ? manImc : womanImc;
    float imc = handler(height);
    
    std::cout << "Gender: "<< gender << std::endl;
    std::cout << "Height: "<< height << "m2" << std::endl;
    std::cout << "Imc: "<< imc << std::endl;
    return 0;
}