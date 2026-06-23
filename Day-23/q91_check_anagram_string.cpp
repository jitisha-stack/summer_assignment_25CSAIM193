#include <iostream>
#include <algorithm>

int main() {
    char str1[100], str2[100];

    std::cout << "Enter first string : ";
    std::cin >> str1;

    std::cout << "Enter second string : ";
    std::cin >> str2;

    // find length
    int len1 = 0, len2 = 0;

    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }

    // if lengths are different, they cannot be anagrams
    if (len1 != len2) {
        std::cout << "Strings are Not Anagrams";
        return 0;
    }

    // sort both strings
    std::sort(str1, str1 + len1);
    std::sort(str2, str2 + len2);

    // compare sorted strings
    bool is_anagram = true;

    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            is_anagram = false;
            break;
        }
    }
    if (is_anagram) {
        std::cout << "Strings are Anagrams" ;
    } else {
        std::cout << "Strings are Not Anagrams" ;
    }
    return 0;
} 