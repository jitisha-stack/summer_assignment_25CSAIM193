#include <iostream>

// function to check perfect number
bool isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return (sum == n);
}

int main() {
    int n;

    std::cout << "Enter  number : ";
    std::cin >> n;

    if (isPerfect(n))
        std::cout << "Perfect Number";
    else
        std::cout << "Not Perfect Number";

    return 0;
}