#include <iostream>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2;

    std::cout << "Enter size of first array: ";
    std::cin >> n1;

    std::cout << "Enter elements of first sorted array :\n";
    for (int i = 0; i < n1; i++)
        std::cin >> arr1[i];

    std::cout << "Enter size of second array: ";
    std::cin >> n2;

    std::cout << "Enter elements of second sorted array :\n";
    for (int i = 0; i < n2; i++) {
        std::cin >> arr2[i];
    }
    
    int i = 0, j = 0, k = 0;

    // merge both arrays
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];

        else
            merged[k++] = arr2[j++];
    }

    // copy remaining elements
    while (i < n1)
        merged[k++] = arr1[i++];

    while (j < n2)
        merged[k++] = arr2[j++];

    std::cout << "Merged Array is : ";
    for (int i = 0; i < k; i++) {
        std::cout << merged[i] << " ";
    }
    return 0;
}