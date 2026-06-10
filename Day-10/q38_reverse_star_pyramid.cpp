#include <iostream>

int main()
{
    int rows = 5;
    for (int i = rows; i >= 1; i--)
    {
        //print leading spaces
        for(int space = 1; space <= rows - i; space++){
            std::cout << " ";
        }
        //print stars
        for (int j = 1; j <= (2 * i - 1); j++){
            std::cout << "*";
        }

        std::cout << std::endl;
    }
    return 0;
}