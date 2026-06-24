#include <iostream>
#include <cstring>

int main() {
    char str1[50], str2[50], temp[100];

    std::cout << "Enter first string : ";
    std::cin.getline(str1, 50);

    std::cout << "Enter second string : ";
    std::cin.getline(str2, 50);

    // check lengths
    if (strlen(str1) != strlen(str2)) {
        std::cout << "Strings are not rotations .";
        return 0;
    }

    // Copy first string twice into temp
    strcpy(temp, str1);
    strcat(temp, str1);

    // check if second string exists in temp
    if (strstr(temp, str2) != NULL)
        std::cout << "Strings are rotations ";
    else
        std::cout << "Strings are not rotations " ;

    return 0;
}