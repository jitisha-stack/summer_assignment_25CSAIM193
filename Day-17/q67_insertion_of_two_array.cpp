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

    std::cout << "Enter size of second array : ";
    std::cin >> n2;

    int arr2[100];

    std::cout << "Enter elements of second array: "<<std::endl;
    for (int i = 0; i < n2; i++) {
        std::cin >> arr2[i];
    }

    std::cout << "Intersection of array : ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                std::cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}