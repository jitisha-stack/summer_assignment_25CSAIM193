#include <iostream>
int main() {
    int n;
    std::cout << "Enter order of square matrix: ";
    std::cin >> n;

    int A[10][10];
    int symmetric = -1;

    std::cout << "Enter matrix elements : \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> A[i][j];
        }
    }

    //check if A[i][j] == A[j][i]
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                symmetric = 1;
                break;
            }
        }
    }

    if (symmetric != 1) {
        std::cout << "Matrix is Symmetric";
    } else {
        std::cout << "Matrix is Not Symmetric";
    }

    return 0;
}