#include <iostream>
//function to calculate factorial
int factorial(int n){
   int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    std::cout << "Enter number : ";
    std::cin >> num;

    //Check for negative number
    if (num < 0) {
        std::cout << "Factorial not defined for negative numbers";
    }
    else {
        std::cout << "Factorial is : " << factorial(num);
    }
    return 0;
}