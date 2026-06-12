#include <iostream>

//function to check Armstrong number
bool isArmstrong(int n)
{
    int original = n;
    int sum = 0, d;

    while (n != 0) {
        d = n % 10;
        sum += d*d*d;
        n /= 10;
    }

    return (sum == original);
}

int main()
{
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isArmstrong(num))
        std::cout << "Armstrong Number";
    else
        std::cout << "Not an Armstrong Number";

    return 0;
}