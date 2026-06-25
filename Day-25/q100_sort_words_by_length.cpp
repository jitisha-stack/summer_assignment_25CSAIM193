#include <iostream>
#include <cstring>

int main() {
    char words[10][50];
    int n;
    std::cout << "Enter number of words : ";
    std::cin >> n;
    std::cin.ignore(); //remove leftover /0

    std::cout << "Enter words : \n";
    for (int i = 0; i < n; i++) {
        std::cin.getline(words[i], 50);
    }

    // sort according to length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (strlen(words[j]) > strlen(words[j + 1])) {

                char temp[50];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    std::cout << "\n Words sorted by length\n";
    for (int i = 0; i < n; i++) {
        std::cout << words[i] << std::endl;
    }
    return 0;
}