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

    std::cout << "Union: ";

    //print first array
    for (int i = 0; i < n1; i++) {
        std::cout << arr1[i] << " ";
    }

    //print only elements not present in first array
    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            std::cout << arr2[i] << " ";
        }
    }

    return 0;
}