#include <iostream>

int main() {

    float n1, n2, n3, n4 = 0.0;

    std::cout << "Type the first grade note: ";
    std::cin >> n1;

    std::cout << "Type the second grade note: ";
    std::cin >> n2;

    std::cout << "Type the third grade note: ";
    std::cin >> n3;

    std::cout << "Type the fourth grade note: ";
    std::cin >> n4;

    float average = (n1 + n2 + n3 + n4) / 4;

    std::cout << "Your average is: "<< average << std::endl;
    return 0;
}