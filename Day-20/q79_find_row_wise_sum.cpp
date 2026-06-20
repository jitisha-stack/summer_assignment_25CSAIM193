#include <iostream>

int main() {
    int row , col ;

    std::cout << "Enter rows and columns: ";
    std::cin >> row >> col ;

    int a[10][10];

    std::cout << "Enter matrix elements:\n";
    for (int i = 0; i < row ; i++) {
        for (int j = 0; j < col ; j++) {
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < row ; i++) {
        int row_sum = 0;
        for (int j = 0; j < col ; j++) {
            row_sum += a[i][j];
        }

        std::cout << "Sum of Row " << i + 1 << " = " << row_sum << "\n";
    }
    return 0;
}