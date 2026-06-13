#include <iostream>

// function to find largest element
int findlargest(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

//function to find smallest element
int findsmallest(int arr[], int size){
    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Largest Element is : "
              << findlargest(arr, n) << std::endl;

    std::cout << "Smallest Element is :  "
              << findsmallest(arr, n);
    return 0;
}