#include <iostream>
int main() {
    int n;

    std::cout << "Enter order of square matrix: ";
    std::cin >> n;

    int A[10][10];
    int sum = 0;

    std::cout << "Enter matrix elements :\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> A[i][j];
        }
    }

    //add diagonal elements
    for (int i = 0; i < n; i++) {
        sum = sum + A[i][i];
    }

    std::cout << "Diagonal Sum is : " << sum;
    return 0;
}