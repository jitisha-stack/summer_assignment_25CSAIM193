#include <iostream>

// function to rotate array left
void rotate_left(int arr[], int size) {
    int first = arr[0];

    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = first;
}

// function to display array
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

    rotate_left(arr, size);
    std::cout << "Array after Left Rotation: ";
    display(arr, size);
    return 0;
}