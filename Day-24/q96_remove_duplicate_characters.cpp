#include <iostream>
#include <cstring>

int main() {
    char str[100], result[100];
    int k = 0;

    std::cout << "Enter string : " ;
    std::cin.getline(str, 100) ;

    int len = strlen(str) ;

    // traverse each character
    for (int i = 0; i < len; i++) {
        bool found = false ;

// check if character already exists
        for (int j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                found = true;
                break;
            }
        }

        // add only unique characters
        if (!found) {
            result[k++] = str[i];
        }
    }

    result[k] = '\0';
    std::cout << "String after removing duplicates characters is : " << result;
    return 0;
}