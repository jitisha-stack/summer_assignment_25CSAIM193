#include <iostream>

int main() {
    char str[100];
    bool found = false;

    std::cout << "Enter string : ";
    std::cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                std::cout << "First repeating character : " << str[i];
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        std::cout << "No repeating character is found";
    }
    return 0;
}