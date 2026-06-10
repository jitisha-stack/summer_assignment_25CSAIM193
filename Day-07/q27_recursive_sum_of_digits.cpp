#include <iostream>
int sumofDigits(int n)
{
    //base case
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sumofDigits(n / 10); //add last digit and recurse on remaining nums
}

int main()
{
    int n ;
    std::cout << "Enter number : ";
    std::cin >> n;

    std::cout << "Sum of Digits = "<< sumofDigits(n); 
    return 0;
}