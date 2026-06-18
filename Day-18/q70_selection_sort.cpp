#include <iostream>

int main() {
    int n;
    std::cout << "Enter number of elements : ";
    std::cin >> n;

    int arr[100];

    std::cout << "Enter array elements "<<std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    //selection sort
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        // Find index of smallest element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i] ;
        arr[i] = arr[min_idx] ;
        arr[min_idx] = temp ;
    }

    std::cout << "sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}