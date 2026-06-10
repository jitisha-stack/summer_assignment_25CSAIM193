#include <iostream>
int fact(int a)
{
    //base case
    if (a == 0 || a == 1)
    {
        return 1;
    }

    // Recursive call
    return a * fact(a - 1);
}

int main()
{
    int n;
    std::cout << "Enter number : ";
    std::cin >> n;

    std::cout << "Factorial of " << n<< " is : " << fact(n);
    return 0;
}