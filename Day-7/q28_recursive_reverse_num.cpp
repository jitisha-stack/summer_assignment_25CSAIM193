#include <iostream>
int reverseNum = 0;

//function to reverse a number using recursion
int reverseNumber(int n)
{
    //base case
    if (n == 0)
    {
        return reverseNum;
    }

    //add last digit to reversed number
    reverseNum = reverseNum * 10 + (n % 10);
    return reverseNumber(n / 10) ;
}

int main()
{
    int n ;
    std::cout << "Enter number: ";
    std::cin >> n;

    std::cout << "Reversed Number is "<< reverseNumber(n) ;
    return 0;
}