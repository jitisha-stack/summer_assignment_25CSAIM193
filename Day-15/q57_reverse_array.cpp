#include <iostream>
//function to reverse array
void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

//function to display array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int size;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];

    std::cout << "Enter elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    reverse(arr, size);

    std::cout << "Reversed Array: ";
    display(arr, size);
    return 0;
}