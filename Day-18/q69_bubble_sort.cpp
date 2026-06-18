#include <iostream>

int main() {
    int n;
    std::cout << "Enter number of elements : ";
    std::cin >> n;

    int arr[100];

    std::cout << "Enter array elements : "<<std::endl ;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    //bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            // Swap if elements in order
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j] ;
                arr[j] = arr[j + 1] ;
                arr[j + 1] = temp ;
            }
        }
    }

    std::cout << "Sorted Array is :  ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}