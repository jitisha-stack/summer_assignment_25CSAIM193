#include <iostream>

int main() {
    int r1, c1, r2, c2;

    std::cout << "Enter rows and columns of first matrix : ";
    std::cin >> r1 >> c1;

    std::cout << "Enter rows and columns of second matrix : ";
    std::cin >> r2 >> c2;

    if (c1 != r2) {
        std::cout << "Matrix multiplication not possible.";
        return 0;
    }

    int A[10][10], B[10][10], C[10][10];

    std::cout << "Enter first matrix : \n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Enter second matrix :\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            std::cin >> B[i][j];
        }
    }

    // matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    std::cout << "Product of Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}