#include <iostream>

int main() {
    int n1, n2;

    std::cout << "Enter size of first array: ";
    std::cin >> n1;

    int arr1[100];

    std::cout << "Enter elements of first array:\n";
    for (int i = 0; i < n1; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter size of second array: ";
    std::cin >> n2;

    int arr2[100];

    std::cout << "Enter elements of second array:\n";
    for (int i = 0; i < n2; i++) {
        std::cin >> arr2[i];
    }

    int merged[200];

    //copy first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    //copy second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    std::cout << "Merged Array: ";
    for (int i = 0; i < n1 + n2; i++) {
        std::cout << merged[i] << " ";
    }

    return 0;
}