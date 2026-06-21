#include <iostream>

int main() {
    char str[100];
    int vowels = 0, consonant = 0;

    std::cout << "Enter string: " ;
    std::cin.getline(str, 100) ;

    for (int i = 0; str[i] != '\0'; i++) {

        // check only alphabet characters
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {

            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
                str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u') {

                vowels++;
            }
            else {
                consonant++;
            }
        }
    }

    std::cout << "Vowels = " << vowels << "\n";
    std::cout << "Consonants = " << consonant;
    return 0;
}