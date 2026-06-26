#include <iostream>

int main() {
    int secret_num = 45; // number to be guessed
    int n;

    do {
        std::cout << "Enter your guess  number : ";
        std::cin >> n;

        if (n < secret_num)
            std::cout << "Guess a bigger number \n";
        else if (n > secret_num)
            std::cout << "Guess a smaller number \n";
        else
            std::cout << "Congratulations! Correct Guess\n";

    } while (n != secret_num);
    return 0;
}