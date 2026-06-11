#include <iostream>
//Function to check prime number
bool isPrime(int n){
    if (n <= 1)
        return false ;  //0 and 1 are not prime

//check divisibility from 2 to n/2
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isPrime(num)){
        std::cout << num << " is Prime";
    }
    else {
        std::cout << num << " is Not Prime";
    }
    return 0;
}