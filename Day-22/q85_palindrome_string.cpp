#include <iostream>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = -1;

    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);

    while (str[length] != '\0') { //finding length of string
        length++;
    }

    // compare characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome != 0) {
        std::cout << "Palindrome String" ;
    }
    else {
        std::cout << "Not Palindrome String" ;
    }

    return 0;
}