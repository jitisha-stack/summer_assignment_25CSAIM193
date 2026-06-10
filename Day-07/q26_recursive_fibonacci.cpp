#include <iostream>
int fibo(int n)
{
    //base case
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }
    //recursive call
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    std::cout << "Enter position : ";
    std::cin >> n ;

    std::cout << "Fibonacci Number is : "<< fibo(n) ;
    return 0;
}