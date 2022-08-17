#include <iostream>

float calculateSalary(float amount, int hours) {

    float salary = amount * hours;
    return salary;
}

int main() {

    std::cout << "Amount per hour: R$";
    float amountPerHour(0);
    std::cin >> amountPerHour;

    std::cout << "Hours worked: ";
    int hoursWorked(0);
    std::cin >> hoursWorked;

    float salary = calculateSalary(amountPerHour, hoursWorked);

    std::cout << "Amount per hour: R$"<< amountPerHour << std::endl;
    std::cout << "Hours worked: " << hoursWorked << "h" << std::endl;
    std::cout << "Salary: R$"<< salary << std::endl;
    return 0;
}