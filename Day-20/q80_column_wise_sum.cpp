#include <iostream>
int main() {
    int rows, cols ;
    std::cout << "Enter rows and columns : " ;
    std::cin >> rows >> cols;

    int A[10][10];

    std::cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> A[i][j];
        }
    }

    for (int j = 0; j < cols; j++) {
        int col_sum = 0;
        for (int i = 0; i < rows; i++) {
            col_sum += A[i][j];
        }
        std::cout << "Sum of Column " << j + 1 << " = " << col_sum << "\n";
    }
    return 0;
}