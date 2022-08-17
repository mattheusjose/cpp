#include <iostream>

float circleArea(int radius) {

    const float PI = 3.1415;
    float circleArea = PI * (radius * radius);

    return circleArea;
}

int main() {

    std::cout << "Circle radius: ";
    int radius(0);
    std::cin >> radius;

    float area = circleArea(radius);
    std::cout << "The area of the circle with "<< radius << " radius is "<< area << std::endl;
    return 0;
}