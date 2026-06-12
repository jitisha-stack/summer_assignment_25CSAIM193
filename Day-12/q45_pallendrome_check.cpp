#include <iostream>

// Function to check palindrome
bool isPalindrome(int n){
    int original = n;
    int reverse = 0, d;

    while (n != 0){
        d = n % 10;
        reverse = reverse * 10 + d;
        n /= 10;
    }

    return (original == reverse);
}

int main()
{
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPalindrome(num)){
        std::cout << "Palindrome Number";
    }
    else {
        std::cout << "Not a Palindrome Number";
    }
    return 0;
}