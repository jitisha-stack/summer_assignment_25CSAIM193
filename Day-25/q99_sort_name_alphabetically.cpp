#include <iostream>
#include <cstring>

int main() {
    char name[10][50];
    int n;

    std::cout << "Enter number of names : ";
    std::cin >> n;
    std::cin.ignore();

    std::cout << "Enter names : \n";

    for (int i = 0; i < n; i++)
        std::cin.getline(name[i], 50);

    //bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (strcmp(name[j], name[j + 1]) > 0) {

                char temp[50];
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    std::cout << "\n Names in Alphabetical Order is \n";

    for (int i = 0; i < n; i++) {
        std::cout << name[i] << std::endl;
    }
    return 0;
}