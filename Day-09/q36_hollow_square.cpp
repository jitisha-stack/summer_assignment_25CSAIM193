#include <iostream>

int main()
{
    int n = 5 ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            //print stars on boundary of pattern
            if (i == 1 || i == n || j == 1 || j == n)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}