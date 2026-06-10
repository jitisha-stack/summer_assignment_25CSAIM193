#include <iostream>
int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            std::cout << ch;
        }
        std::cout << std::endl;
    }
    return 0;
}