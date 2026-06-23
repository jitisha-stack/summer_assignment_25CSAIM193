#include <iostream>
int main() {
    char str[100];
    int freq[256] = {0};

    std::cout << "Enter string : ";
    std::cin.getline(str, 100);

    // count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++ ;
    }
    int max_freq = 0;
    char max_char;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = (char)i;
        }
    }

    std::cout << "Maximum occurring character = "<< max_char << "\n";
    std::cout << "Frequency = " << max_freq;
    return 0;
}