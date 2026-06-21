#include <iostream>
int main() {
    char str[100];
    int length = 0;

    std::cout << "Enter  string: ";
    std::cin.getline(str, 100);

    // count characters until null character \0
    while (str[length] != '\0') {
        length++;
    }

    std::cout << "Length of string = " << length;
    return 0;
}