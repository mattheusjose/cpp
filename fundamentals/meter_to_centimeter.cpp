#include <iostream>

int meterToCm(int distanceInMeter) {

    int distanceInCm = distanceInMeter * 100;
    return distanceInCm;
}

int main() {


    std::cout << "Type the distance in meter: ";
    int distanceInMeter(0);
    std::cin >> distanceInMeter;

    int distanceInCm = meterToCm(distanceInMeter);

    std::cout << distanceInMeter << "m is equal to "<< distanceInCm << "cm" << std::endl;
}