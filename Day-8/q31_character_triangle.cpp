#include <iostream>

int main()
{
    int rows = 5;
    char ch;
    for (int i = 1; i <= rows; i++)
    {
        for(ch = 'A'; ch < 'A' + i; ch++)
        {
            std::cout << ch ;
        }
        std::cout << std::endl ;
    }
    return 0;
}