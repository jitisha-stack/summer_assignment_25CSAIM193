#include <iostream>

int main() {
    char str[100];
    bool found = false ;

    std::cout << "Enter string : ";
    std::cin.getline(str, 100);

    for (int i = 0 ; str[i] != '\0' ; i++) {
        int count = 0;

        //inner loop counts occurence of letter
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count == 1) {
            std::cout << "First non-repeating character is : "<< str[i];
            found = true;
            break;
        }
    }

    if (!found) { //if found is false
        std::cout << "Non-repeating character not found";
    }
    return 0;
}