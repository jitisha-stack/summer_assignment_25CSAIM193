#include <iostream>
//function to calculate sum
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    std::cout << "Enter two numbers : ";
    std::cin >> num1 >> num2;
    std::cout << "Sum = " << sum(num1,num2);
    return 0;
}