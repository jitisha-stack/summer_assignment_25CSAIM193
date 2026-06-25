#include <iostream>
#include <cstring>

int main() {
    char str1[50], str2[50];

    std::cout << "Enter first string : ";
    std::cin.getline(str1, 50);

    std::cout << "Enter second string : ";
    std::cin.getline(str2, 50);

    std::cout << "Common Characters  ";

    for (int i = 0; str1[i] != '\0'; i++) {

        // to avoid duplicate output
        bool repeated = false;

        for (int x = 0; x < i; x++) {
            if (str1[i] == str1[x]) {
                repeated = true;
                break;
            }
        }

        if (repeated)
            continue ;

        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                std::cout << str1[i] << " ";
                break;
            }
        }
    }
    return 0;
}