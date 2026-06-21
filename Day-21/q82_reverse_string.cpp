#include <iostream>
int main() {
    char str[100];

    std::cout << "Enter string : ";
    std::cin.getline(str, 100);

    int length = 0;

    // find length
    while (str[length] != '\0') {
        length++;
    }

    std::cout << "Reversed String "<<std::endl;

    // print from last to first
    for (int i = length - 1; i >= 0; i--) {
        std::cout << str[i];
    }
    return 0;
}