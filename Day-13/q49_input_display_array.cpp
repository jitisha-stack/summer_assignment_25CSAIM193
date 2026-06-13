#include <iostream>
//function to input array elements
void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

//function to display array elements
void displayArray(int arr[], int size) {
    std::cout << "\nArray Elements are: ";

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int n;
    std::cout << "Enter array size =  ";
    std::cin >> n;

    int arr[n];

    inputArray(arr, n);
    displayArray(arr, n);

    return 0;
}