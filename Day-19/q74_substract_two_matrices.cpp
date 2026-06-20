#include <iostream>
int main() {
    int row, col;

    std::cout << "Enter rows and columns : ";
    std::cin >> row >> col ;

    int A[10][10], B[10][10], C[10][10];

    std::cout << "Enter first matrix:\n";
    for (int i = 0; i < row ; i++) {
        for (int j = 0; j < col; j++) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Enter second matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col ; j++) {
            std::cin >> B[i][j];
        }
    }

    //subtract matrices
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    std::cout << "Subtraction of  Matrix :\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}