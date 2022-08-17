#include <iostream>

int sum(int n1, int n2) {

    int res = n1 + n2;
    return res;
}

int main() {

    std::cout << "Type the first number: ";
    int n1(0);
    std::cin >> n1;

    std::cout << "Type the second number: ";
    int n2(0);
    std::cin >> n2;

    int res = sum(n1, n2);
    std::cout << n1 << " + " << n2 << " = "<< res << std::endl;
    return 0;
}