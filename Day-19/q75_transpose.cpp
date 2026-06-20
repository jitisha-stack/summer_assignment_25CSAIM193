#include <iostream>
int main() {
    int row, col;

    std::cout << "Enter rows and columns: ";
    std::cin >> row >> col;

    int A[10][10];

    std::cout << "Enter matrix elements :\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col ; j++) {
            std::cin >> A[i][j];
        }
    }
    std::cout << "Transpose Matrix:\n";

    // rows become columns and columns become rows
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            std::cout << A[j][i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}