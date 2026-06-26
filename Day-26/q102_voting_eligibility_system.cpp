#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // check voting eligibility
    if (age >= 18)
        std::cout << "Eligible to Vote";
    else
        std::cout << "Not Eligible to Vote";

    return 0;
}