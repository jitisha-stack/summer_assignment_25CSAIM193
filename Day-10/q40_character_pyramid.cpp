#include <iostream>

int main(){
    int rows = 5;
    for (int i = 1; i <= rows; i++){
        //ascending characters
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            std::cout << ch;
        }

        //descending characters
        for (char ch = 'A' + i - 2 ; ch >= 'A' ; ch--) {
            std::cout << ch;
        }

        std::cout << std::endl;
    }
    return 0;
}