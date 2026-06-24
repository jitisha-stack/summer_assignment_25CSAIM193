#include <iostream>
#include <cstring>

int main() {
    char str[50];

    std::cout << "Enter  string : ";
    std::cin.getline(str, 50);

    int len = strlen(str);

    std::cout << "Compressed string : ";

    // traverse string
    for (int i = 0; i < len; i++) {
        int count = 1;

        // count consecutive characters
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        std::cout << str[i] << count ;
    }
    return 0;
}