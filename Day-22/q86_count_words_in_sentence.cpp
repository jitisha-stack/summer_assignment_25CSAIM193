#include <iostream>
int main() {
    char str[100];
    int words = 1;

    std::cout << "Enter a sentence: ";
    std::cin.getline(str, 100);

    //count spaces
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words++;
        }
    }
    std::cout << "Number of words = " << words;
    return 0;
}