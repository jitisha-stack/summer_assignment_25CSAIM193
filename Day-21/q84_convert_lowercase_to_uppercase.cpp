#include <iostream>
int main() {
    char str[100];

    std::cout << "Enter a string : ";
    std::cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {

        // convert lowercase letters to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    std::cout << "Uppercase String is : " << str ;
    return 0;
}