#include <iostream>
int main() {
    char str[100], copystring[100];
    int j = 0;

    std::cout << "Enter  string : " ;
    std::cin.getline(str, 100) ;

    // copy only non-space characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            copystring[j] = str[i];
            j++ ;
        }
    }

    copystring[j] = '\0'; //for last character

    std::cout << "String without spaces: " << copystring;
    return 0;
}