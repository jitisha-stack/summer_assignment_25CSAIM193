#include <iostream>

//function to rotate array right
void rotateRight(int arr[], int size) {
    int last = arr[size - 1];

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
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
    rotateRight(arr, size);
    std::cout << "Array after Right Rotation: ";
    display(arr, size);

    return 0;
}