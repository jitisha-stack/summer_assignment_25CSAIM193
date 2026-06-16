#include <iostream>

// function to sort array in descending order
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
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

    std::cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    sortDescending(arr, size);

    std::cout << "Descending Order: ";
    display(arr, size);

    return 0;
}