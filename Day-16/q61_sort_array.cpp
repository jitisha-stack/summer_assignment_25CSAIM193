#include <iostream>

// function to sort array in ascending order
void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to display array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int size;

    std::cout << "Enter size: ";
    std::cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    sortAscending(arr, size);

    std::cout << "Sorted Array: ";
    display(arr, size);

    return 0;
}