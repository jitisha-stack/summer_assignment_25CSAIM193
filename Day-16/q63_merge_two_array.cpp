#include <iostream>

//function to merge arrays
void merge(int arr1[], int n1, int arr2[], int n2) {
    std::cout << "Merged Array: ";

    for (int i = 0; i < n1; i++) {
        std::cout << arr1[i] << " ";
    }

    for (int i = 0; i < n2; i++) {
        std::cout << arr2[i] << " ";
    }
}

int main() {
    int n1, n2;

    std::cout << "Enter size of first array: ";
    std::cin >> n1;

    int arr1[n1];

    for (int i = 0; i < n1; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter size of second array: ";
    std::cin >> n2;

    int arr2[n2];

    for (int i = 0; i < n2; i++) {
        std::cin >> arr2[i];
    }

    merge(arr1, n1, arr2, n2);

    return 0;
}