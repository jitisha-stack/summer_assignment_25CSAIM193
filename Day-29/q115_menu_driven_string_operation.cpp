#include <iostream>
#include <cstring>

int main() {
    char str1[100], str2[100];
    int choice;

    std::cout <<"Enter first string : ";
    std::cin.getline(str1, 100);

    std::cout <<"Enter second string : ";
    std::cin.getline(str2, 100);

    std::cout << "\n1. Find Length of First String \n";
    std::cout << "2. Copy First String \n";
    std::cout << "3. Concatenate Strings \n";
    std::cout << "4. Compare Strings \n";

    std::cout << "Enter choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Length = " << strlen(str1);
            break;

        case 2:
            strcpy(str2, str1);
            std::cout << "Copied String: " << str2;
            break;

        case 3:
            strcat(str1, str2);
            std::cout << "Concatenated String: " << str1;
            break;

        case 4:
            if (strcmp(str1, str2) == 0)
                std::cout <<"Strings are equal";
            else
                std::cout <<"Strings are not equal";
            break;

        default:
            std::cout << "Invalid Choice" ;
    }

    return 0;
}