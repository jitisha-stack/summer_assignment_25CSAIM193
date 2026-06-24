#include <iostream>
#include <cstring>

int main() {
    char str[100];
    char longest[50];
    int max_length = 0;

    std::cout << "Enter a sentence: ";
    std::cin.getline(str, 100);

    int i = 0;

    while (str[i] != '\0') {
        char word[50];
        int j = 0;

        // skip spaces
        while (str[i] == ' ')
            i++;

        // store current word
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }

        word[j] = '\0';

        // Check longest word
        if (j > max_length) {
            max_length = j;
            strcpy(longest, word);
        }
    }
    std::cout << "Longest word: " << longest << std::endl;
    std::cout << "Length: " << max_length;
    return 0;
}