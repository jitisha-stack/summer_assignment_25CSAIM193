#include <iostream>
int main() {
    char str[100] , ch;
    int count = 0;

    std::cout << "Enter string : " ;
    std::cin.getline(str, 100) ;
    std::cout << "Enter character to find frequency: " ;
    std::cin >> ch ;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    std::cout << "Frequency of '" << ch << "' = " << count;
    return 0;
}