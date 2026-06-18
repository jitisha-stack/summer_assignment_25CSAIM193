#include <iostream>
int main() {
    int n, key;

    std::cout << "Enter number of elements : ";
    std::cin >> n;

    int arr[100] ;

    std::cout << "Enter sorted array elements : "<<std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Enter element to search: ";
    std::cin >> key;

    int low = 0;
    int high = n - 1;
    int idx = 1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            idx = mid;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (idx != 1) {
        std::cout << "Element found at index " << idx ;
    }
    else {
        std::cout << "Element not found";
    }

    return 0;
}